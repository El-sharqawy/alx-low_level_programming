#include "main.h"

/**
 * print_array -  prints n elements of an array of integers,
 * followed by a new line.
 * @a: An input integer (the array)
 * @n: An input integer (number of elements)
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i;
	int x[n];

	for (i = 0; i < n; i++)
	{
		x[i] = a[i];
		printf("%d", x[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
