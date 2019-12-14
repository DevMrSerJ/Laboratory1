#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <algorithm>

using namespace std;

void Task1()
{
	int value;
	const int length = 27;
	int i = 0, j = length - 1, k = 0;
	int arrSortFinal[length];
	int arrSort[length];

	system("cls");

	cout << "Задание №1\n";

	cout << "Введите массив:\n";

	for (int i = 0; i < length; i++)
	{
		cout << "a[" << i + 1 << "] = ";
		cin >> value;
		arrSort[i] = value;
	}

	//сортировка по возрастанию
	sort(arrSort, arrSort + length);

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
	int k = 0;
	int f = 0;
	system("cls");

	cout << "Задание №2\n";
	cout << "Введите размер массива:\n";

	int count;
	cin >> count;
	const int countArr = count;

	int* arrLinear = new int[countArr];
	int* arrLinearFinal = new int[countArr];

	for (int i = 0; i < countArr; i++)
	{
		cin >> arrLinear[i];
	}

	for (int i = 0; i < count; i++)
	{
		if (f == 1)
		{
			arrLinearFinal[i + 1] = arrLinear[i];
			continue;
		}
		if (arrLinear[i] > 0)
		{
			if (k == 1)
			{
				arrLinearFinal[i] = arrLinear[i];
				arrLinearFinal[i + 1] = 100;
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

void Task3()
{
	int arrY[9][12];
	int range_max = 100, range_min = -100;
	int sumPos = 0;
	int sumNeg = 0;

	system("cls");

	cout << "Задание №3\n";

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			arrY[i][j] = (double)rand() / (RAND_MAX + 1) * (range_max - range_min) + range_min;
		}
	}

	for (int i = 0; i < 9; i++)
	{
		if ((i % 2) == 0)
		{
			for (int j = 0; j < 12; j++)
			{
				if (arrY[i][j] > 0)
				{
					sumPos += arrY[i][j];
				}
			}
		}
		else
		{
			for (int j = 0; j < 12; j++)
			{
				if (arrY[i][j] < 0)
				{
					sumNeg += arrY[i][j];
				}
			}
		}
	}

	cout << "F = (Sn + S0) / (Sn - S0) = " << (double)(sumPos + sumNeg) / (sumPos - sumNeg) << endl;

	cout << "Нажмите любую клавишу...";
	getchar();
	getchar();
}

void Task4()
{
	int arrA[10][10];
	int range_max = 100, range_min = -100;

	system("cls");

	cout << "Задание №4.1 - сортировка двумерного массива (статический массив)\n\n";

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			arrA[i][j] = (double)rand() / (RAND_MAX + 1) * (range_max - range_min) + range_min;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (arrA[j][j] > arrA[j + 1][j + 1])
			{
				int v = arrA[j][j];
				arrA[j][j] = arrA[j + 1][j + 1];
				arrA[j + 1][j + 1] = v;
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << "|" << arrA[i][j] << "|\t";
		}
		cout << endl;
	}

	cout << "\nНажмите любую клавишу...";
	getchar();
	getchar();
}

void Task5()
{
	int **arrA = new int*[10];
	for (int i = 0; i < 10; i++)
	{
		arrA[i] = new int[10];
	}
	int range_max = 100, range_min = -100;

	system("cls");

	cout << "Задание №4.2 - сортировка двумерного массива (динамический массив)\n\n";

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			arrA[i][j] = (double)rand() / (RAND_MAX + 1) * (range_max - range_min) + range_min;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (arrA[j][j] > arrA[j + 1][j + 1])
			{
				int v = arrA[j][j];
				arrA[j][j] = arrA[j + 1][j + 1];
				arrA[j + 1][j + 1] = v;
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << "|" << arrA[i][j] << "|\t";
		}
		cout << endl;
	}

	for (int i = 0; i < 10; i++) {
		delete[] arrA[i];
	}

	cout << "\nНажмите любую клавишу...";
	getchar();
	getchar();
}

void Task6()
{
	system("cls");

	cout << "Задание №5\n\n";

	const int L = 8, M = 7, N = 25;
	int arrLog[L][N][M];
	int mark;
	int quantAdmit = 0, quantAuto = 0;

	for (int i = 0; i < L; i++)
	{
		cout << i + 1 << " страница" << endl;
		for (int j = 0; j < N; j++)
		{
			cout << j + 1 << " студент(ка)" << endl;
			for (int k = 0; k < M; k++)
			{
				while (true)
				{
					cout << k + 1 << " лабораторная работа: ";
					cin >> mark;
					if (mark > -1 && mark < 5)
					{
						arrLog[i][j][k] = mark;
						break;
					}
				}
			}
			cout << "\n";
		}
		cout << "\n\n";
	}

	for (int i = 0; i < L; i++)
	{
		for (int j = 0; j < N; j++)
		{
			int report = 0, aut = 0;
			for (int k = 0; k < M; k++)
			{
				if (arrLog[i][j][k] == 3)
					report++;
				else if (arrLog[i][j][k] == 4)
					aut++;
			}

			if (report + aut == M)
				quantAdmit++;
			if (aut == M)
				quantAuto++;
		}
	}

	cout << "Количество студентов, допущенных к экзамену: " << quantAdmit << endl;
	cout << "Количество студентов, получивших \"автомат\": " << quantAuto << endl;

	cout << "\nНажмите любую клавишу...";
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
		cout << "4 - сортировка двумерного массива (статический массив)" << endl;
		cout << "5 - сортировка двумерного массива (динамический массив)" << endl;
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
		case 3:
			Task3();
			break;
		case 4:
			Task4();
			break;
		case 5:
			Task5();
			break;
		case 6:
			Task6();
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