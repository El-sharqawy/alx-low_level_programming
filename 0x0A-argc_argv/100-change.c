#include "main.h"

/**
 * main - Entry Point
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 * Return: 0 on Success, otherwise 1.
 */
int main(int argc, char *argv[])
{
	int i, j, amount = 0, cents = 0;
	int coins[] = {25, 10, 5, 2, 1};
	int coin_count[5] = {0};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);

	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		coin_count[i] = amount / coins[i];
		amount = amount % coins[i];
	}

	for (j = 0; j < 5; j++)
	{
		cents += coin_count[j];
	}

	printf("%d\n", cents);
	return (0);
}
