#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - runs the main code
*Return: returns a success value
 */

int main(void)
{
	int c;
	int b;

	for (c = 48; c <= 57; c++)
	{
		for (b = 48; b <= 57; b++)
		{
			if (b > c)
			{
				putchar(c);
				putchar(b);
				if (c != 56 || b != 57)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
