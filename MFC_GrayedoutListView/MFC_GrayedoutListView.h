
// MFC_GrayedoutListView.h : PROJECT_NAME アプリケーションのメイン ヘッダー ファイルです
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH に対してこのファイルをインクルードする前に 'stdafx.h' をインクルードしてください"
#endif

#include "resource.h"		// メイン シンボル


// CMFCGrayedoutListViewApp:
// このクラスの実装については、MFC_GrayedoutListView.cpp を参照してください
//

class CMFCGrayedoutListViewApp : public CWinApp
{
public:
	CMFCGrayedoutListViewApp();

// オーバーライド
public:
	virtual BOOL InitInstance();

// 実装

	DECLARE_MESSAGE_MAP()
};

extern CMFCGrayedoutListViewApp theApp;
