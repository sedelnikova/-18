// ivan18.4.cpp : Дана матрица размера M × N. В каждом ее столбце найти количество элементов, больших среднего арифметического всех элементов этого столбца

#include <iostream>
#include <stdio.h> 
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	int N, M, i, j, ar, k;

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

	k = 0;
	ar = 0;

	for (j = 0; j < N; j++)
	{
		for (i = 0; i < M; i++)
		{
			ar = ar + matrix[i][j];
		}

		ar = ar / M;

		for (i = 0; i < M; i++)
		{
			if (matrix[i][j] > ar)
			{
				k++;
			}
			
		}

		cout << k << " ";
		ar = 0;
		k = 0;
	}
	
	
	
	return 0;
}
