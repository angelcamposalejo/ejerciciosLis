#include "stdafx.h"  //________________________________________ NumberList.cpp
#include "NumberList.h"
#include <list>

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
	const int number = tbxNumber.IntValue;
	lista.push_back(number);
	Sys::Format(text, L"%d\r\n", number);
	tbxList.Text += text;
	tbxNumber.Text = L"";
	tbxNumber.SetFocus();
	//sacar el minimo
	if (lista.empty() == true)
	{
		tbxMin.Text = L"";
		return;
	}
	int minimo = lista[0];
	unsigned int count = lista.size();
	for (unsigned int i = 1; i < count; i++)
	{
		if (lista[i] < minimo)
		{
			minimo = lista[i];
		}
	}
	tbxMin.IntValue = minimo;
	//sacar el maximo
	if (lista.empty() == true)
	{
		tbxMin.Text = L"";
		return;
	}
	int maximo = lista[0];
	unsigned int count = lista.size();
	for (unsigned int i = 1; i < count; i++)
	{
		if (lista[i] > minimo)
		{
			maximo = lista[i];
		}
	}
	tbxMin.IntValue = maximo;
}

