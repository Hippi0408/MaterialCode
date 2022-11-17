//=============================================================================
//
// object.h
// Author : koduna hirohito
//
//=============================================================================
#ifndef _OBJECT_H_			//���̃}�N����`������Ȃ�������
#define _OBJECT_H_			//2�d�C���N���[�h�h�~�̃}�N����`

//*****************************************************************************
// �C���N���[�h
//*****************************************************************************
#include "main.h"

//*****************************************************************************
// �N���X��`
//*****************************************************************************
class CObject
{
public:
	CObject();
	virtual ~CObject();

	virtual HRESULT Init() = 0;
	virtual void Uninit() = 0;
	virtual void Update() = 0;
	virtual void Draw() = 0;
	
private:

};

#endif