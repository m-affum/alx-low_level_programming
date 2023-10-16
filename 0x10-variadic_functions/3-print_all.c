#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>

/**
*print_all - prints all inputs (anything)
*@format: list of types of inputs passed to the function
*Return: nothing (void)
*/
void print_all(const char * const format, ...)
{
	char *str_arg, *sep = "";
	float float_arg;
	char char_arg;
	va_list arg;
	int int_arg, i = 0;

	va_start(arg, format);
	if (format)
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
					char_arg = va_arg(arg, int);
					printf("%s%c", sep, char_arg);
					break;
				case 'i':
					int_arg = va_arg(arg, int);
					printf("%s%d", sep, int_arg);
					break;
				case 'f':
					float_arg = va_arg(arg, double);
					printf("%s%f", sep, float_arg);
					break;
				case 's':
					str_arg = va_arg(arg, char *);
					if (str_arg == NULL)
						str_arg = "(nil)";
					printf("%s%s", sep, str_arg);
					break;
				default:
					i++;
					continue;
			} i++;
			sep = ", ";
		}
	}
	printf("\n");
	va_end(arg);
}

