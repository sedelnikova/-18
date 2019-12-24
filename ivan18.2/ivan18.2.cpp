// ivan18.2.cpp : 
//Дана матрица размера M × N и целое число K (1 ≤ K ≤ M). Найти сумму и произведение элементов K-й строки данной матрицы

#include <iostream>
#include <stdio.h> 
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	int N, M, i, j, s, p, K;

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

	cout << "Введите, пожалуйста, число K (целое) - номер строки: ";
	cin >> K;

	if (K < 1 && K > M)
	{
		cout << "Пардон, данные не корректны ;)" << endl;
	}

	s = 0;
	p = 1;
	K = K - 1;

	for (i = 0; i < N; i++)
	{
		s = s + matrix[K][i];
		p = p * matrix[K][i];
	}


	cout << "Сумма = " << s << endl;
	cout << "Произведение = " << p << endl;
	return 0;
}
