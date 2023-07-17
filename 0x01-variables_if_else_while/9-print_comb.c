#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - runs the main code
*Return: returns a success value
 */

int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
		if (x != 57)
			putchar(',');
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
