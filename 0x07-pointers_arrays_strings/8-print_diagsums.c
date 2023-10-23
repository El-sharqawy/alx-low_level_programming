#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: input array pointer.
 * @size: size of the matrix
 * Return: Nothing.
 */
void print_diagsums(int *a, int size)
{
	int i, mat1 = 0, mat2 = 0;

	for (i = 0; i < size; i++)
	{
		mat1 += a[i * size + i];
		mat2 += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", mat1, mat2);
}
