#include "main.h"

/**
 * main - print largest prime factor
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i, f;

	i = 612852475143;
	for (f = 2; f <= i; f++)
	{
		if (i % f == 0)
		{
			n /= f;
			f--;
		}
	}
	printf("%ld\n", f);
	return (0);
}
