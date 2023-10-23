#include "main.h"
/**
 * print_chessboard - prints the chessboard.
 * @a: an input characters 2D array
 * Return: Nothing.
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i, j = 0;

	for (; i < 64; i++)
	{
		if (i % 8 == 0 && i != 0)
		{
			j = i;
			_putchar('\n');
		}
		_putchar(a[i / 8][i - j]);
	}
	_putchar('\n');
}
