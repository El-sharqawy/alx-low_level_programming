#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: and input string of 0 and 1.
 * Return: converted Number.
 */
unsigned int binary_to_uint(const char *b)
{
	int num = 0, base = 1, len = strlen(b), i;

	if (!b)
		return (0);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			num += base;
		base *= 2;
	}
	return (num);
}
