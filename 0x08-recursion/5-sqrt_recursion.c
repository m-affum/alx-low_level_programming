#include "main.h"
/**
*sqrt_helper - function that returns the natural square root of a number.
*@n: nummber
*@i: determine sqrt
*Return: returns square root of n
*/
int sqrt_helper(int n, int i)
{
	if (i == 0)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (sqrt_helper(n, i - 1));
}

/**
*_sqrt_recursion - function that returns the natural square root of a number.
*@n: nummber
*Return: returns square root of n
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	return (sqrt_helper(n, n - 1));
}
