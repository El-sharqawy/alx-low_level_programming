#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: get last digit of number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	l_d = n % 10;
	if (l_d > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l_d);
	}
	else if (l_d == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l_d);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l_d);
	}
	return (0);
}
