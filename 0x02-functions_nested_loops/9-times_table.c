#include "main.h"

/**
 * times_table - Check Main
 * Description: function that prints the 9 times table, starting with 0
 * Return: Nothing
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(32);

		for (j = 1; j <= 9; j++)
		{
			k = (i * j);
			if ((k / 10) > 0)
			{
				_putchar((k / 10) + '0');
			}
			else
			{
				_putchar(32);
			}
			_putchar((k % 10) + '0');

			if (j < 9)
			{
				_putchar(',');
				_putchar(32);
			}
		}
		_putchar('\n');
	}
}
