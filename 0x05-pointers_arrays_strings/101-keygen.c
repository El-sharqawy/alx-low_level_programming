#include "main.h"

/**
 * main - generates keygen.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int random = 0, chr = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (chr < 2772)
	{
		random = rand() % 128;
		if ((chr + random) > 2772)
			break;

		chr = chr + random;
		printf("%c", random);
	}
	printf("%c\n", (2772 - chr));
	return (0);
}
