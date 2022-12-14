//=============================================================================
//
// object.h
// Author : koduna hirohito
//
//=============================================================================
#ifndef _OBJECT_H_			//このマクロ定義がされなかったら
#define _OBJECT_H_			//2重インクルード防止のマクロ定義

//*****************************************************************************
// インクルード
//*****************************************************************************
#include "main.h"

//*****************************************************************************
// クラス定義
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