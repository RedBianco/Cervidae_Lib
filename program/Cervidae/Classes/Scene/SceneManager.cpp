#if 0
#include "DxLib.h"
#include <rnfs.h>
#include "../Common/appCommonParam.h"
#include "SceneManager.h"

//===================================================================================
//  SceneManager.cpp
//  Cervidae
//
//  Created by kashima akihiro on 2019/07/08.
//===================================================================================

//=====================================================================//
//	ゲームシステム側処理リターンコードマクロ
//=====================================================================//
enum   ENUM_APP_FUNC_RETURN_CODE
{
	eAPP_FUNC_RETURN_KEEP = -1,
	eAPP_FUNC_RETURN_RUN = 0,
	eAPP_FUNC_RETURN_END = 1,
	eAPP_FUNC_RETURN_EXIT = 99,      // 処理終了コード 
};

//=================================================================================//
// 
// 
//=================================================================================//
int		App::SceneManager::updateProcess()
{
	int	__ProcessCode = eAPP_FUNC_RETURN_KEEP;

	// 関数処理
	__ProcessCode = (this->p_funcExec)();
	if (__ProcessCode == eAPP_FUNC_RETURN_EXIT)
	{
	}

	// eAPP_FUNC_RETURN_EXIT を返すとアプリケーション終了
	return __ProcessCode;
}

//=================================================================================//
// 
// 
//=================================================================================//
bool	App::SceneManager::setupProcessFunc(appProcessFunc  p_Func)
{
	{
		// 関数セット
		this->p_funcExec = p_Func;

		// 設定確保
		return	true;
	}
	// 設定失敗
	return	false;
}
#endif

