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

	for  (c = 48; c <= 57; c++)
		putchar(c);
	for (c = 97; c <= 102; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
