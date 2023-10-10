#include <stdio.h>

/**
 * main - Entry point
 * Description: list all the natural numbers below 10
 * Return: 0 Always (Success)
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 5) == 0 || (i % 3) == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
