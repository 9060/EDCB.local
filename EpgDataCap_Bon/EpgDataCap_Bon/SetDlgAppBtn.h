#pragma once


// CSetDlgAppBtn �_�C�A���O

class CSetDlgAppBtn
{
public:
	CSetDlgAppBtn();   // �W���R���X�g���N�^�[
	~CSetDlgAppBtn();
	BOOL Create(LPCTSTR lpszTemplateName, HWND hWndParent);
	HWND GetSafeHwnd() const{ return m_hWnd; }
	
	void SetIniPath(std::wstring commonIniPath, std::wstring appIniPath){
		this->commonIniPath = commonIniPath;
		this->appIniPath = appIniPath;
	};
	void SaveIni(void);

// �_�C�A���O �f�[�^
	enum { IDD = IDD_DIALOG_SET_APPBTN };

protected:
	HWND m_hWnd;
	std::wstring commonIniPath;
	std::wstring appIniPath;

	BOOL OnInitDialog();
	afx_msg void OnBnClickedButtonViewExe();
	static INT_PTR CALLBACK DlgProc(HWND hDlg, UINT uMsg, WPARAM wParam, LPARAM lParam);
	HWND GetDlgItem(int nID) const{ return ::GetDlgItem(m_hWnd, nID); }
};