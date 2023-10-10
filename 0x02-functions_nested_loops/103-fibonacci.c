#include <stdio.h>

/**
 * main - Entry point
 * Description: finds and prints the sum of the even-valued terms
 * Return: 0 Always (Success)
 */
int main(void)
{
	long int i;
	long int x = 1, y = 2, sum = 0, fSum = 0;

	for (i = 0; i < 49; i++)
	{
		if ((y % 2 == 0) && (y <= 4000000))
		{
			fSum = fSum + y;
		}
		sum = x + y;
		x = y;
		y = sum;
	}
	printf("%ld\n", fSum);
	return (0);
}
