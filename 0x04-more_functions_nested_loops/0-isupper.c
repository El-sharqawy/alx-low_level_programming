/*
 * File: 0-isupper.c
 * Auth: Osama Elsharqawy
 */

#include "main.h"

/**
 * _isupper - Check Main
 * @a: An input character
 * Description: function returns 1 if the character is uppercase
 * Return: 1 or 0 in otherwise.
 */
int _isupper(int a)
{
	if (a >= 'A' && a <= 'Z')
		return (1);

	else
		return (0);
}
