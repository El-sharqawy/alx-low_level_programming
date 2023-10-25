#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string
 * Return: the length of string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * is_valid_char - check if the character is valid.
 * @c: an input character.
 * Return: true or false.
 */
bool is_valid_char(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/**
 * is_palindrome_recursive - check if the string is palindrome.
 * @s: an input character.
 * @left: an input integer.
 * @right: an input integer.
 * Return: true or false.
 */
bool is_palindrome_recursive(char *s, int left, int right)
{
	if (left >= right)
	{
		return (true);
	}

	if (!is_valid_char(s[left]))
	{
		return (is_palindrome_recursive(s, left + 1, right));
	}

	if (!is_valid_char(s[right]))
	{
		return (is_palindrome_recursive(s, left, right - 1));
	}

	if (tolower(s[left]) != tolower(s[right]))
	{
		return (false);
	}

	return (is_palindrome_recursive(s, left + 1, right - 1));
}

/**
 * is_palindrome - check if the string is palindrome.
 * @s: an input character.
 * Return: 1 or 0.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	if (_strlen_recursion(s) == 0)
	{
		return (1);
	}

	return (is_palindrome_recursive(s, 0, len - 1) ? 1 : 0);
}
