#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the size of various types on the computer it is compiled and run on
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char charVar;
int intVar;
long longIntVar;
long long longVar;
float floatVar;
printf("Size of a char: %zu byte(s)", sizeof(charVar));
printf("Size of an int: %zu byte(s)", sizeof(intVar));
printf("Size of a long int: %zu byte(s)", sizeof(longIntVar));
printf("Size of a long long int: %zu byte(s)", sizeof(longVar));
printf("Size of a float: %zu byte(s)", sizeof(floatVar));
return (0);
}
