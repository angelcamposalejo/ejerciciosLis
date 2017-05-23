#include "stdafx.h"  //________________________________________ NumberList.cpp
#include "NumberList.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	NumberList app;
	return app.BeginDialog(IDI_NumberList, hInstance);
}

void NumberList::Window_Open(Win::Event& e)
{
}

void NumberList::bt1_Click(Win::Event& e)
{
}

