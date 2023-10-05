#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the size of various types on the computer  
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
printf("Size of a char: %zu byte(s)\n", sizeof(charVar));
printf("Size of an int: %zu byte(s)\n", sizeof(intVar));
printf("Size of a long int: %zu byte(s)\n", sizeof(longIntVar));
printf("Size of a long long int: %zu byte(s)\n", sizeof(longVar));
printf("Size of a float: %zu byte(s)\n", sizeof(floatVar));
return (0);
}
