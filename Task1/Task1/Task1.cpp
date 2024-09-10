#define _CRT_SECURE_NO_WARNINGS
#define MATRIX_ROWS 5
#define MATRIX_COLS 8
#include <stdio.h>
#include <time.h>
#include <random>
#include <locale.h>


int main()
{
	srand(time(NULL));//  вадр. массив сумма всех четных элем. выше главной диагонола
	setlocale(LC_ALL, "Russian");
	int summ = 0;
	int size;
	printf("¬ведите размер массива: ");
	scanf("%d", &size);
	int** arr = (int**)malloc(sizeof(int*) * size);
	for (int i = 0; i < size; i++) {
		arr[i] = (int*)malloc(sizeof(int) * size);
	}
	for (int i = 0; i < size; i++)
	{
		
		for (int j = 0; j < size; j++)
		{
			arr[i][j] = rand() % 50; // 0 - 49
			printf("%-2d ", arr[i][j]);
			if (arr[i][j] % 2 == 0 && i < j) summ += arr[i][j];
			
		}
		printf("\n");
	}
	printf("\n%d", summ);
	free(arr);
	return 0;
}