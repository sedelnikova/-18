// ivan18.5.cpp  Дана целочисленная матрица размера M × N. Найти номер первого из ее столбцов, содержащих только нечетные числа. Если таких столбцов нет, то вывести 0.
 
#include <iostream>
#include <stdio.h> 
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	int N, M, i, j, p, k, a, min;

	cout << "Введите, пожалуйста, число N: ";
	cin >> N;
	cout << "Введите, пожалуйста, число M: ";
	cin >> M;

	int** matrix = new int* [M];
	for (i = 0; i < M; i++)
	{
		matrix[i] = new int[N];
	}
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			cin >> matrix[i][j];
		}
	}

	a = 0;
	p = -1;
	min = 0;

	for (j = 0; j < N; j++)
	{
		for (i = 0; i < M; i++)
		{
			if (matrix[i][j] % 2 != 0)
			{
				a++;
			}
		}

		if ((a == M) && (p == -1))
		{
			p = j;
		}

		a = 0;
	}

	if (p != -1)
	{
		cout << p + 1 << endl;
	}
	else 
	{
		cout << "0" << endl;
	}
	
	return 0;
}
