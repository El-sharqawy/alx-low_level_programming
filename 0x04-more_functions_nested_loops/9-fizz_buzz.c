/*
 * File: 9-fizz_buzz.c
 * Auth: Osama Elsharqawy
 */

#include <stdio.h>

/**
 * main - Check Main
 * Description: print Fizz Buzz
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 1;
	printf("%d", i);
	for (i = 2; i <= 100; i++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf("\n");
	return(0);
}
