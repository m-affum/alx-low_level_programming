#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
*print_numbers – numbers to print
*@separator: takes the new line character
*@n: number of inputs  passed
*Return: nothing (void)
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list args;

	va_start(args, n);
	for (a = 0; a< n; a++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && a < n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
