#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
*print_strings - This function prints strings
*@separator: string to be printed between the string
*@n: number of arguments passed to the function
*Return: nothing (void)
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list args;
	char *str;

	va_start(args, n);
	for (a= 0; a < n; a++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL && a < n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}

