#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
*sum_them_all - function returns the sum of all its inputs
*@n: the number of arguments to be passed
*Return: either 0 or sum of inputs
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int j;
	int sum = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (j = 0; j < n; j++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}

