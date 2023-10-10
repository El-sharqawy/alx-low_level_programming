#include "main.h"

/**
 * _islower - Check Main
 * @c: An input character
 * Description: function returns 1 if the character is lowercase
 * Return: 1 or 0 in otherwise.
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
