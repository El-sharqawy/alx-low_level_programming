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

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return(0);
}
