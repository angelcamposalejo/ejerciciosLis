#pragma once  //______________________________________ NumberList.h  
#include "Resource.h"
class NumberList : public Win::Dialog
{
public:
	NumberList()
	{
	}
	~NumberList()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Label lb1;
	Win::Textbox tbxList;
	Win::Label lb2;
	Win::Textbox tbxNumber;
	Win::Button btInsert;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(349);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(169);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"NumberList";
		lb1.Create(NULL, L"List:", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 10, 10, 52, 25, hWnd, 1000);
		tbxList.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_AUTOVSCROLL | ES_MULTILINE | ES_READONLY | ES_LEFT | ES_WINNORMALCASE, 12, 46, 143, 116, hWnd, 1001);
		lb2.Create(NULL, L"New Number", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 178, 8, 83, 25, hWnd, 1002);
		tbxNumber.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 178, 47, 88, 25, hWnd, 1003);
		btInsert.Create(NULL, L"Insert", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 272, 45, 70, 28, hWnd, 1004);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		lb1.Font = fontArial014A;
		tbxList.Font = fontArial014A;
		lb2.Font = fontArial014A;
		tbxNumber.Font = fontArial014A;
		btInsert.Font = fontArial014A;
	}
	//_________________________________________________
	void btInsert_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btInsert.IsEvent(e, BN_CLICKED)) { btInsert_Click(e); return true; }
		return false;
	}
};
