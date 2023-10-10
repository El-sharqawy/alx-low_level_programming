#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * Parameters: int c
 *
 * Return: 1 if lowercase, 0 if not lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
