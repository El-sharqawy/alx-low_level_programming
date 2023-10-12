/*
 * File: 9-fizz_buzz.c
 * Auth: Osama Elsharqawy
 */

#include <stdio.h>

/**
 * main - Check Main
 * Description: function that prints the numbers from 1 to 100
 * followed by a new line. But for multiples of three print Fizz 
 * instead of the number and for the multiples of five print Buzz
 * Return: Nothing
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
