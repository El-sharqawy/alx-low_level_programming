#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints base 16 numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b;

	for (b = 0; b < 10; ++b)
	{
		putchar('0' + b);
		if (b != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
