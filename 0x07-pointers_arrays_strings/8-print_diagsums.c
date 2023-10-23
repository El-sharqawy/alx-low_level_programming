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

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
		{
			mat1 += *(a + i);
		}
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
		{
			mat2 += *(a + i);
		}
	}
	printf("%d, %d\n", mat1, mat2);
}
