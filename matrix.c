#include "function.h"
#include <stdio.h>
#include <stdlib.h>
#define M 7
#define N 10

void func()
{
    int matrix[M][N];
    int count = 0;
    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++)
        {
            matrix[i][j] = rand() % 101 - 50;
            if (matrix[i][j] % 7 == 0)
            {
                printf("%d ", matrix[i][j]);
                count++;
            }
        }
    puts("");
    printf("Количество чисел в матрице, делящихся на 7 без остатка: %d\n", count);
	 printf("Матрица:");
	 for (int i = 0; i < M; i++)
	 {
		printf("\n");
	 	for (int j = 0; j < N; j++)
			printf("%d ", matrix[i][j]);
	 }
}

