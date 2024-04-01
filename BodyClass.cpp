#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring> 
#include <Windows.h>   // ��� ������ SetConsoleCP(1251); SetConsoleOutputCP(1251);
#include"StringHeader.h"

using namespace std;



// ������������
STRING::STRING() 
{ 
	_text = new char[81] {'\0'};
	count_Inter++;
	cout << "����������� �� ��������� ��������� ������ ������ ��������� ��� " << this << ". ������� ����� = " << count_Inter << endl;
}
STRING::STRING(int _stringLen)
{
	_text = new char[_stringLen+1];
	_text[_stringLen] = '\0';
	for (int i = 0; i < _stringLen; i++)
	{
		_text[i] = 'A';
	}
	count_Inter++;
	cout << "����������� ��������� ������ ��������� ������� ��������� ��� " << this << ". ������� ����� = " << count_Inter << endl;
	
}
STRING::STRING(const char* _TextFromUser)
{
	setText(_TextFromUser);
	count_Inter++;
	cout << "����������� ��������� ������ ������������� ������� ��������� ��� " << this << ". ������� ����� = " << count_Inter << endl;
}

// ����������
STRING::~STRING()
{
	if ( _text != nullptr ) delete[] _text;
	cout << "����������� " << count_Inter << " ������." << endl;
	count_Inter--;
};

void STRING::setText(const char* _Text)
{
	int length = strlen(_Text);
	_text = new char[length + 1];
	_text[length] = '\0';
	for (int i = 0; i < length; i++)
	{
		_text[i] = _Text[i];
	}
}


// ������� ������
void STRING::EnteringUserString() {
	char InputTxt[400];
	cout << "������� ������: ";
	cin.getline(InputTxt, 400);
	cin.getline(InputTxt, 400);

	setText(InputTxt);
}

void STRING::EnteringUserString80() {
	char InputTxt[81];
	cout << "������� ������ �� ����� 80 ��������: ";
	cin.getline(InputTxt, 81);
	int len = strlen(InputTxt);
	for (int i = 0; i < len; i++)
	{
		_text[i] = InputTxt[i];
	}
}