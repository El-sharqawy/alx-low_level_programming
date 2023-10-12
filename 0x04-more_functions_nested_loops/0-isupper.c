#include "main.h"

/**
 * _isupper - Check Main
 * @a: An input character
 * Description: function returns 1 if the character is uppercase
 * Return: 1 or 0 in otherwise.
 */
int _isupper(char a)
{
	if (a >= 'A' && a <= 'Z')
		return(1);
	else
		return(0);
}
