#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the first 50 Fibonacci numbers
 * Return: 0 Always (Success)
 */
int main(void)
{
	long int fibonacci[50];
	int i;

	fibonacci[0] = 1;
	fibonacci[1] = 2;
	printf("%ld, %ld, ", fibonacci[0], fibonacci[1]);

	for (i = 2; i < 50; i++)
	{
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
		if (i == 49)
		{
			printf("%ld\n", fibonacci[i]);
		}
		else
		{
			printf("%ld, ", fibonacci[i]);
		}
	}
	return (0);
}
