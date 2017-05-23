#include "stdafx.h"  //________________________________________ NumberList.cpp
#include "NumberList.h"
#include <list>
double suma = 0;
double multiplicacion = 1;
int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	NumberList app;
	return app.BeginDialog(IDI_NumberList, hInstance);
}

void NumberList::Window_Open(Win::Event& e)
{

}

void NumberList::btInsert_Click(Win::Event& e)
{
	//insertar elemento
	wstring text;
	const double number = tbxNumber.DoubleValue;
	lista.push_back(number);
	Sys::Format(text, L"%.1f\r\n", number);
	tbxList.Text += text;
	tbxNumber.Text = L"";
	tbxNumber.SetFocus();
	suma += number;
	multiplicacion *= number;
	tbxSuma.DoubleValue = suma;
	tbxMultiplicacion.DoubleValue = multiplicacion;
}

