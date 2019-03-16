#pragma once

#include <string>

//=================================================================================//
//  appEffekseerLib.h
//  Cervidae
//
//  Created by kashima akihiro on 2019/01/11.
//=================================================================================//


#define	EFFEKSEER_DXLIB_VERSION

// ��ʂɕ\������ő�p�[�e�B�N������ݒ�
// ���o���߂���Ə������ׂ�������
#define	EFFEKSEER_PARTICLE_DRAW_MAX		( 1500 )

#define	EFFEKSEER_PLAY_RUN				(  0)		//	�Đ���
#define	EFFEKSEER_PLAY_END				( -1)		//	�Đ�����Ă��Ȃ��A�������͍Đ��I��
#define	EFFEKSEER_PLAY_ERROR			( -1)		//	�Đ�����Ă��Ȃ��A�������͍Đ��I��

#define	EFFEKSEER_NONHANDLE				(0xffffffff)	/*	�����ȃn���h��	*/


// TODO:����݌v���C���\��
namespace App
{
	namespace EffekseerLib
	{
		extern int		libSystemInit(void);
		extern void		libSetZBuffer(void);
	}
}






/* End appEffekseerLib.h */
