#include <stdio.h>

/**
 * main - Entry point
 * 
 * Description: prints all possible different combinations of three digits
 * 
 * Return: Always 0 (Success)
 */
int main()
{
	int i,j,k;
	int a,b,c,d;

	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				a = i + '0';
				b = j + '0';
				c = k + '0';
				d = '\0';
				putchar(a);
				putchar(b);
				putchar(c);
				putchar(d);
				if (a == '7' && b == '8' && c == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}

	return (0);
}
