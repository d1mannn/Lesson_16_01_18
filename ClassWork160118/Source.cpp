#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <time.h>
#define size 20
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int task, length = size;

	do
	{
		cout << "Введите номер задания - ";
		cin >> task;

		switch (task)
		{
			case 1:
			{
				int m[5][6];
				for (int i = 0; i < 5; i++)
				{
					for (int j = 0; j < 6; j++)
					{
						m[i][j] = -50 + rand() % 100;
				//		cout << "Index [" << i << "] === " << m[i] << "\t" << m[j] << endl;
					}
				}

				for (int i = 0; i < 5; i++)
				{
					for (int j = 0; j < 6; j++)
					{
						cout << "Index [" << i << "] === " << m[i][j] << endl;
					}
				}
			} break;

			case 2:
			{
				/*Дано целое число в двоичной системе счисления, т.е.последовательность цифр  0 и 1. 
					Составить программу перевода этого числа в десятичную систему счисления*/

				int m[20], a, i = 0, k = 0;
				cin >> a;
				while (a > 0)
				{
					if (a % 2 != 0)
						m[i] = 1;
					else
						m[i] = 0;
					i++;
					a = a / 2;
				} 
				for (int j = 20 - 1; j >=0; j--)
				{
					if (m[j] >= 0)
					{
						cout << m[j] << endl;
						k++;
					}
				} cout << "\nk == " << k << endl;
				for (int i = 0; i < length; i++)
				{

				}
				
			} break;

			case 3:
			{
				/*В прямоугольной матрице найти наибольший из минимальных элементов строк матрицы*/
				int m[4][4] = { {0} ,{0}, {0}, {0} }, m2[4], min;
				int m3[1][1] = { {0} };
				for (int i = 0; i < 4; i++)
				{	
					min = m[i][0];
					for (int j = 0; j < 4; j++)
					{
						m[i][j] = -100 + rand() % 200;
						cout << m[i][j] << endl;
						if (m[i][j] < min)
						{
							min = m[i][j];
							m2[i] = min;
						}
					}
				} 
				for (int i = 0; i < 4; i++)
				{
					if (m2[i] < min)
						min = m2[i];
				} 
				cout << "MIN == " << min << endl;
			} break;

			case 4:
			{
				/*Ввести массив, состоящий из 15 - ти элементов(двузначные целые числа).
					Изменить разрядность цифр, образующих элементы исходного массива и, 
					таким образом, сформировать новый массив.Например, 
					исходный массив : 25 71 84…, новый массив : 52 17 48….*/
				int m[size], m2[size], a, b;
				for (int i = 0; i < length; i++)
				{
					m[i] = 10 + rand() % 89;
					cout << "Index [" << i << "] === " << m[i] << endl;
				}
				for (int i = 0; i < length; i++)
				{
					a = m[i] % 10;
					b = m[i] / 10;
					m[i] = b;
					m2[i] = a;
					cout << m2[i] << m[i] << endl;
				}
			} break;

			case 5:
			{
				/*Ввести массив, состоящий из 9 элементов(девять двузначных чисел 
					в восьмеричной системе счисления).Сформировать новый массив  
					путем перевода значений элементов исходного массива в десятичную систему счисления*/
				int m[9], m2[9], m3[9], a = 122, count = 0, x, y, k;
				for (int i = 0; i < 9; i++)
				{
					m[i] = a % 8;
					a = a / 8;
					if (m[i] != 0)
						count++;
				} 
				for (int i = count - 1; i >= 0; i--)
					cout << m[i] << endl;
				cout << "\nЗАПОЛНЯЕМ МАССИВ" << endl;
				for (int i = 0; i < 9; i++)
				{
					m2[i] = 10 + rand() % 89;
					cout << "INDEX [" << i << "] === " << m2[i] << endl;
				} 
				for (int i = 0; i < 9; i++)
				{	
					k = 1;
					x = m2[i] / 10;
					y = m2[i] % 10;
					m2[i] = pow(8, k) * x;
					m[i] = pow(8, k - 1) * y;
					m3[i] = m2[i] + m[i];
				} 
				cout << "\nDESYAT" << endl;
				for (int i = 0; i < 9; i++)
				{
					cout << m3[i] << endl;
				}

			} break;

			case 6:
			{
				/*Дан массив, состоящий из 12 двоичных чисел.Удалить элементы, которые встречаются более двух раз.*/
				int m[12], count = 0;
				for (int i = 0; i < 12; i++)
				{
					m[i] = 10 + rand() % 89;
					cout << "Index " << i << " === " << m[i] << endl;
				}
				for (int i = 0; i < 12; i++)
				{
					for (int j = i + 1; j < 12; j++)
					{
						if (m[i] == m[j])
							count++;
					}
				}
			} break;
		}
	} while (task < 30);

}