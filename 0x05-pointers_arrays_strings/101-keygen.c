#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates keygen.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ra = 0, chr = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (chr < 2772)
	{
		ra = rand() % 128;
		if ((chr + ra) > 2772)
			break;

		chr = chr + ra;
		printf("%c", ra);
	}
	printf("%c\n", (2772 - chr));
	return (0);
}
