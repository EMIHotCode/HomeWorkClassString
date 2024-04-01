#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>   // для работы SetConsoleCP(1251); SetConsoleOutputCP(1251);
#include <cstring> 
#include"StringHeader.h"

using namespace std;

int STRING::count_Inter{ 0 };

int main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	
	/* Вызов пустого конструктора */
	cout << "Вызов пустого конструктора: " << endl;
	STRING test;
	cout << "Результат (пустая строка): " << test.getStr() << endl << endl;

	/* Вызов конструктора с заданной длинной строки */
	cout << "Вызов конструктора с заданной длинной строки: " << endl;
	int lenString{ 0 };
	cout << "Введите число символов в строке которую хотите создать: ";
	cin >> lenString;
	STRING test2(lenString);
	cout << "Результат: " << test2.getStr() << endl << endl;
	
	/* Вызов конструктора инициализированной строкой */
	cout << "Вызов конструктора инициализированного строкой: " << endl;
	STRING test3("Бананы лопала бомба");
	cout << "Результат: " << test3.getStr() << endl << endl;

	/* Ввод строки с клавиатуры */
	cout << "Вызов метода класса для ввода строки с клавиатуры: " << endl;
	STRING test4;
	test4.EnteringUserString();
	cout << "Результат: " << test4.getStr() << endl << endl;

	/* Вывод количества созданных объектов строк */
	int count = STRING::getCount();
	cout << "Количество созданных объектов строк: " << count << endl << endl;

	return 0;
}