#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <algorithm>

using namespace std;

void Task1()
{
	system("cls");

	cout << "Задание №1\n";

	const int length = 27;
	int arrSort[length];

	cout << "Введите массив:\n";

	for (int i = 0; i < length; i++)
	{
		cout << "a[" << i + 1 << "] = ";
		int value;
		cin >> value;
		arrSort[i] = value;
	}

	//сортировка по возрастанию
	sort(arrSort, arrSort + length);

	int arrSortFinal[length];
	int i = 0, j = length - 1, k = 0;

	while (k <= length - 2)
	{
		arrSortFinal[i] = arrSort[k];
		k++;
		arrSortFinal[j] = arrSort[k];
		k++;
		i++;
		j--;
	}
	arrSortFinal[j] = arrSort[k];

	cout << "Остортированный массив: \n";

	for (int y = 0; y < length; y++)
	{
		cout << "" << y + 1 << " = " << arrSortFinal[y] << endl;
	}

	cout << "Нажмите любую клавишу...";
	getchar();
}

void Task2()
{
	system("cls");

	cout << "Задание №2\n";
	cout << "Введите размер массива:\n";

	int count;

	cin >> count;

	const int countArr = count;

	int* arrLinear = new int[countArr];

	for (int i = 0; i < countArr; i++) {
		cin >> arrLinear[i];
	}

	int k = 0;
	int f = 0;
	int* arrLinearFinal = new int[countArr];

	for (int i = 0; i < count; i++) {
		if (f == 1) {
			arrLinearFinal[i+1] = arrLinear[i];
			continue;
		}
		if (arrLinear[i] > 0) {
			if (k == 1) {
				arrLinearFinal[i] = arrLinear[i];
				arrLinearFinal[i+1] = 100;
				f = 1;
				continue;
			}
			k++;
		}
		arrLinearFinal[i] = arrLinear[i];
	}

	for (int y = 0; y < count + 1; y++)
	{
		cout << "" << y + 1 << " = " << arrLinearFinal[y] << endl;
	}

	cout << "Нажмите любую клавишу...";
	getchar();
	getchar();
}

int main()
{
	// Установка кириллицы
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	while (true)
	{
		system("cls");
		cout << "Меню: " << endl;
		cout << "1 - сортировка массива А(27)" << endl;
		cout << "2 - вставить число 100" << endl;
		cout << "3 - вычислить по формуле" << endl;
		cout << "4 - сортировка двумерного массива (1 способ)" << endl;
		cout << "5 - сортировка двумерного массива (2 способ)" << endl;
		cout << "6 - журнал преподавателя" << endl;
		cout << "0 - выход из программы" << endl;
		cout << "Введите номер задания: ";
		int numLesson;
		cin >> numLesson;

		switch (numLesson)
		{
		case 1:
			Task1();
			break;
		case 2:
			Task2();
			break;
		case 0:
			exit(3);
			break;
		default:
			cout << "Такого пункта не существует! нажмите любую клавишу...";
			getchar();
			getchar();
			break;
		}

	}
	system("PAUSE");
}

