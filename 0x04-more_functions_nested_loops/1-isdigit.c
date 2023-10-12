/*
 * File: 1-isdigit.c
 * Auth: Osama Elsharqawy
 */

#include "main.h"

/**
 * _isdigit - Check Main
 * @c: An input character
 * Description: function returns 1 if the character is digit
 * Return: 1 or 0 in otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
