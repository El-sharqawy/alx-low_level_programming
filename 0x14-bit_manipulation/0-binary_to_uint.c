#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: and input string of 0 and 1.
 * Return: converted Number.
 */
unsigned int binary_to_uint(const char *b)
{
	int num = 0, len, i;

	if (!b)
		return (0);

	len = strlen(b);

	for (i = 0; i < len; i++)
	{
		if (b[i] == '1' || b[i] == '0')
			num = (num << 1) | (b[i] - '0');
		else
			return (0);
	}
	return (num);
}
