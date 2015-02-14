#pragma once


#include "../../Common/PathUtil.h"

#include "SetDlgBasic.h"
#include "SetDlgNetwork.h"
#include "SetDlgApp.h"
#include "SetDlgEpg.h"
#include "SetDlgAppBtn.h"
#include "SetDlgService.h"

// CSettingDlg �_�C�A���O

class CSettingDlg
{
public:
	CSettingDlg(HWND hWndOwner = NULL);   // �W���R���X�g���N�^�[
	~CSettingDlg();
	INT_PTR DoModal();
	HWND GetSafeHwnd() const{ return m_hWnd; }

// �_�C�A���O �f�[�^
	enum { IDD = IDD_DIALOG_SETTING };

protected:
	HWND m_hWnd;
	HWND m_hWndOwner;
	std::wstring commonIniPath;
	std::wstring appIniPath;

	CSetDlgBasic basicDlg;
	CSetDlgApp appDlg;
	CSetDlgNetwork networkDlg;
	CSetDlgEpg epgDlg;
	CSetDlgAppBtn appBtnDlg;
	CSetDlgService serviceDlg;

	BOOL OnInitDialog();
	afx_msg void OnBnClickedOk();
	afx_msg void OnTcnSelchangingTab(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnTcnSelchangeTab(NMHDR *pNMHDR, LRESULT *pResult);
	static INT_PTR CALLBACK DlgProc(HWND hDlg, UINT uMsg, WPARAM wParam, LPARAM lParam);
	HWND GetDlgItem(int nID) const{ return ::GetDlgItem(m_hWnd, nID); }
};