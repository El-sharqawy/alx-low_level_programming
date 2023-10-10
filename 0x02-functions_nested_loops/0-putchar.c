#include "main.h"

/**
 * main - check the code
 *
 * Description: prints _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "_putchar\n";
	int i;
	for (i = 0; i < 10; i++)
		_putchar(str[i]);
	return (0);
}
