#include "main.h"

/**
 * reverse_array - reverse array of integers
 * @a: an input integers array
 * @n: number of elements
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n-i-1];
		a[n-i-1] = tmp;
	}
}
