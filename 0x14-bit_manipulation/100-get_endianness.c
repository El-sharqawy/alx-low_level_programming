#include "main.h"

/**
 * get_endianness - checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	short int num;
	char *arr;

	num = 0x01;
	arr = (char *)&num;

	return (arr[0] == 0x01) ? 1 : 0;
}
