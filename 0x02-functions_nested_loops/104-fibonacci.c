#include <stdio.h>

/**
 * main - Entry point
 * Description: finds and prints the first 98 Fibonacci numbers
 * Return: 0 Always (Success)
 */
int main(void)
{
	unsigned long int i, j, k, n, p, r, s;

	j = 1;
	k = 2;

	printf("%lu", j);
	for (i = 1; i < 91; i++)
	{
		printf(", %lu", k);
		k = k + j;
		j = k - j;
	}

	p = j % 1000000000;
	n = j / 1000000000;
	r = k / 1000000000;
	s = k % 1000000000;

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", r + (s / 1000000000));
		printf("%lu", s % 1000000000);
		r = r + n;
		n = r - n;
		s = s + p;
		p = s - p;
	}
	printf("\n");
	return (0);
}
