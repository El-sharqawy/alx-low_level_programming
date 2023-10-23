#include "main.h"
/**
 * print_chessboard - prints the chessboard.
 * @a: an input characters 2D array
 * Return: Nothing.
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i,j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (a[i][j] != ' ')
			{
				_putchar(a[i][j]);
			}
		}
		_putchar('\n');
	}
}
