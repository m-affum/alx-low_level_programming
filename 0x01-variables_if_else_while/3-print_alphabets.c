#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - runs the main code
*Return: returns a success value
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
