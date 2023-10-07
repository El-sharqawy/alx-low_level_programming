#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	char b;
	
	for (c = 'a'; c <= 'z'; ++c)
	{
		putchar(c);
	}
	for (b = 'A'; b <= 'Z'; ++b)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
