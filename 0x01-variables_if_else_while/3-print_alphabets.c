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
	
	for (a = 'a'; a <= 'z'; ++a)
	{
		putchar(a);
	}
	for (b = 'A'; b <= 'Z'; ++b)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
