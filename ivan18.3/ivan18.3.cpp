// ivan18.3.cpp : Дана матрица размера M × N. Найти номер ее столбца с наименьшим произведением элементов и вывести данный номер, а также значение наименьшего произведения.

#include <iostream>
#include <stdio.h> 
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	int N, M, i, j, p, min, n;

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

	min = 1;
	p = 1;
	n = 0;

	for (i = 0; i < M; i++)
	{
		min = min * matrix[i][0];
	}

	for (j = 1; j < N; j++)
	{
		for (i = 0; i < M; i++)
		{
 			p = p * matrix[i][j];
		}
		if (p < min)
		{
			min = p;
			n = j;
			p = 1;
		}
	}
		cout << "Столбец № " << n + 1 << " имеет минимальное произведение = " << min << endl;
	
	return 0;
}
