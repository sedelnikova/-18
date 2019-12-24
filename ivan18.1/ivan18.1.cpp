// ivan18.1.cpp :
//Дана квадратная матрица A порядка M (M — нечетное число). Начиная с элемента A1,1 и перемещаясь против часовой стрелки, 
//вывести все ее элементы по спирали: первый столбец, последняя строка, последний столбец в обратном порядке, 
//первая строка в обратном порядке, оставшиеся элементы второго столбца и т. д.; последним выводится центральный элемент матрицы.

#include <iostream>
#include <stdio.h> 
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	int N, i, j, a, b, c;
	i = 0;
	j = 0;
	cout << "Введите, пожалуйста, число N (нечетное) - порядок квадратной матрицы: ";
	cin >> N;
	int** matrix = new int* [N];
	for (i = 0; i < N; i++)
	{
		matrix[i] = new int[N];
	}
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			cin >> matrix[i][j];
		}
	}

	if (N % 2 == 0)
	{
		cout << "Пардон, данные не корректны ;)" << endl;
	}

	a = 0;
	b = 0;
	c = N;
	
	while (a != N * N)
	{
		for (i = b; i < c; i++)
		{
			cout << matrix[i][b] << " ";
			a++;
		}
		for (i = b + 1; i < c; i++)
		{
			cout << matrix[c - 1][i] << " ";
			a++;
		}
		for (i = c - 2; i >= b; i--)
		{
			cout << matrix[i][c - 1] << " ";
			a++;
		}
		for (i = c - 2; i >= b + 1; i--)
		{
			cout << matrix[b][i] << " ";
			a++;
		}
		c--;
		b++;
	}
}