#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *print_diagsums - a program that prints the sum of the two
 *diagonals of a square matrix of integers
 *@size: array size
 *@a: matrix
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i * size + i];
	}
	for (i = 0; i < size; i++)
	{
		sum2 = sum2 + a[i * size + (size - 1 - i)];

	}
	printf("%d, %d\n", sum1, sum2);

}
