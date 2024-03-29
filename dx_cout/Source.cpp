#include "DxLib.h"
#include "coutDx.hpp"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	ChangeWindowMode(TRUE);
	if (DxLib_Init() == -1) return -1;

	//画像を読み込み
	Graph graph("a.png");
	coutDx << graph.draw();
	
	WaitKey();
	DxLib_End();
	return 0;
}