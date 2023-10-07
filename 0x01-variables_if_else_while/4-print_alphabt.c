#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints alphabet except q & e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;

	for (c = 'a'; c <= 'z'; ++c)
	{
		if (c == 'e' || c == 'q')
			continue;
		putchar(c);
	}
	putchar('\n');
	return (0);
}
