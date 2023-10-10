#include "main.h"

/**
 * print_to_98 - Check Main
 * @n: an input integer
 * Description: function prints all natural numbers from n to 98.
 * Return: Nothing
 */
void print_to_98(int n)
{
	int x, i;

	if (n > 98)
	{
		x = n - 98;
		for (i = 0; i <= x; i++)
		{
			printf("%d", n);
			if (i != x)
			{
				printf(", ");
			}
			n--;
		}
	}
	else
	{
		x = 98 - n;
		for (i = 0; i <= x; i++)
		{
			printf("%d", n);
			if (i != x)
			{
				printf(", ");
			}
			n++;
		}
	}
}

