
// EpgTimerTask.cpp : �A�v���P�[�V�����̃N���X������`���܂��B
//

#include "stdafx.h"
#include "EpgTimerTask.h"
#include "EpgTimerTaskDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEpgTimerTaskApp

// CEpgTimerTaskApp �R���X�g���N�V����

CEpgTimerTaskApp::CEpgTimerTaskApp()
{
	// TODO: ���̈ʒu�ɍ\�z�p�R�[�h��ǉ����Ă��������B
	// ������ InitInstance ���̏d�v�ȏ��������������ׂċL�q���Ă��������B
}


// �B��� CEpgTimerTaskApp �I�u�W�F�N�g�ł��B

CEpgTimerTaskApp theApp;


// CEpgTimerTaskApp ������

BOOL CEpgTimerTaskApp::InitInstance()
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

	// �R�}���h�I�v�V���������
	BOOL bStartSrv = FALSE;
	int argc;
	LPWSTR *argv = CommandLineToArgvW(GetCommandLine(), &argc);
	if (argv != NULL) {
		for (int i = 1; i < argc; i++) {
			if (!lstrcmpi(argv[i], L"/startsrv")) {
				bStartSrv = TRUE;
				break;
			}
		}
		LocalFree(argv);
	}

	CEpgTimerTaskDlg dlg(bStartSrv);
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