
// EpgDataCap_Bon.h : PROJECT_NAME �A�v���P�[�V�����̃��C�� �w�b�_�[ �t�@�C���ł��B
//

#pragma once

#include "resource.h"		// ���C�� �V���{��


// CEpgDataCap_BonApp:
// ���̃N���X�̎����ɂ��ẮAEpgDataCap_Bon.cpp ���Q�Ƃ��Ă��������B
//

class CEpgDataCap_BonApp
{
public:
	CEpgDataCap_BonApp();

public:
	BOOL InitInstance();
};

BOOL WritePrivateProfileInt(LPCTSTR lpAppName, LPCTSTR lpKeyName, int value, LPCTSTR lpFileName);

extern CEpgDataCap_BonApp theApp;