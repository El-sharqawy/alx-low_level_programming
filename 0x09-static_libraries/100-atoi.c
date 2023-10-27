#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: An input string
 * Return: integer value.
 */
int _atoi(char *s)
{
	unsigned int i, count = 0, size = 0, oi = 0, dd = 1, k = 1;

	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;

		if (*(s + count) == '-')
			dd *= -1;

		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
				k *= 10;
			size++;
		}

		count++;
	}

	for (i = count - size; i < count; i++)
	{
		oi = oi + ((*(s + i) - 48) * k);
		k /= 10;
	}
	return (oi * dd);
}
