
// EpgDataCap_Bon.cpp : �A�v���P�[�V�����̃N���X������`���܂��B
//

#include "stdafx.h"
#include "EpgDataCap_Bon.h"
#include "EpgDataCap_BonDlg.h"

#include "CmdLineUtil.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEpgDataCap_BonApp

// CEpgDataCap_BonApp �R���X�g���N�V����

CEpgDataCap_BonApp::CEpgDataCap_BonApp()
{
	// TODO: ���̈ʒu�ɍ\�z�p�R�[�h��ǉ����Ă��������B
	// ������ InitInstance ���̏d�v�ȏ��������������ׂċL�q���Ă��������B
}


// �B��� CEpgDataCap_BonApp �I�u�W�F�N�g�ł��B

CEpgDataCap_BonApp theApp;


// CEpgDataCap_BonApp ������

BOOL CEpgDataCap_BonApp::InitInstance()
{
	// �A�v���P�[�V���� �}�j�t�F�X�g�� visual �X�^�C����L���ɂ��邽�߂ɁA
	// ComCtl32.dll Version 6 �ȍ~�̎g�p���w�肷��ꍇ�́A
	// Windows XP �� InitCommonControlsEx() ���K�v�ł��B�����Ȃ���΁A�E�B���h�E�쐬�͂��ׂĎ��s���܂��B
	INITCOMMONCONTROLSEX InitCtrls;
	InitCtrls.dwSize = sizeof(InitCtrls);
	// �A�v���P�[�V�����Ŏg�p���邷�ׂẴR���� �R���g���[�� �N���X���܂߂�ɂ́A
	// �����ݒ肵�܂��B
	InitCtrls.dwICC = ICC_WIN95_CLASSES;
	InitCommonControlsEx(&InitCtrls);

	SetProcessShutdownParameters(0x300, 0);

	// �R�}���h�I�v�V���������
	CCmdLineUtil cCmdUtil;
	int argc;
	LPWSTR *argv = CommandLineToArgvW(GetCommandLine(), &argc);
	if (argv != NULL) {
		for (int i = 1; i < argc; i++) {
			BOOL bFlag = argv[i][0] == L'-' || argv[i][0] == L'/' ? TRUE : FALSE;
			cCmdUtil.ParseParam(&argv[i][bFlag ? 1 : 0], bFlag, i == argc - 1 ? TRUE : FALSE);
		}
		LocalFree(argv);
	}

	CEpgDataCap_BonDlg dlg;

	map<wstring, wstring>::iterator itr;
	dlg.SetIniMin(FALSE);
	dlg.SetIniView(TRUE);
	dlg.SetIniNW(TRUE);
	for( itr = cCmdUtil.m_CmdList.begin(); itr != cCmdUtil.m_CmdList.end(); itr++ ){
		if( lstrcmpi(itr->first.c_str(), L"d") == 0 ){
			dlg.SetInitBon(itr->second.c_str());
			OutputDebugString(itr->second.c_str());
		}else if( lstrcmpi(itr->first.c_str(), L"min") == 0 ){
			dlg.SetIniMin(TRUE);
		}else if( lstrcmpi(itr->first.c_str(), L"noview") == 0 ){
			dlg.SetIniView(FALSE);
		}else if( lstrcmpi(itr->first.c_str(), L"nonw") == 0 ){
			dlg.SetIniNW(FALSE);
		}else if( lstrcmpi(itr->first.c_str(), L"nwudp") == 0 ){
			dlg.SetIniNWUDP(TRUE);
		}else if( lstrcmpi(itr->first.c_str(), L"nwtcp") == 0 ){
			dlg.SetIniNWTCP(TRUE);
		}
	}


	INT_PTR nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
		// TODO: �_�C�A���O�� <OK> �ŏ����ꂽ���̃R�[�h��
		//  �L�q���Ă��������B
	}
	else if (nResponse == IDCANCEL)
	{
		// TODO: �_�C�A���O�� <�L�����Z��> �ŏ����ꂽ���̃R�[�h��
		//  �L�q���Ă��������B
	}

	// �_�C�A���O�͕����܂����B�A�v���P�[�V�����̃��b�Z�[�W �|���v���J�n���Ȃ���
	//  �A�v���P�[�V�������I�����邽�߂� FALSE ��Ԃ��Ă��������B
	return FALSE;
}

int APIENTRY _tWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPTSTR lpCmdLine, int nCmdShow)
{
	theApp.InitInstance();
	return 0;
}

BOOL WritePrivateProfileInt(LPCTSTR lpAppName, LPCTSTR lpKeyName, int value, LPCTSTR lpFileName)
{
	TCHAR sz[32];
	wsprintf(sz, TEXT("%d"), value);
	return WritePrivateProfileString(lpAppName, lpKeyName, sz, lpFileName);
}
