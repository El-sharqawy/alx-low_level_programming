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
	char a;
	int b;

	for (b = 0; b < 10; ++b)
	{
		putchar('0' + b);
	}
	for (a = 'a'; a <= 'f'; ++a)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
