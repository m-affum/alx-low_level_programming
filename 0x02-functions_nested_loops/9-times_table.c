#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Return: no return
 */
void times_table(void)
{
	int a, b, mult;

	for (a = 0; a <= 9; a++)
	{
		_putchar(48);
		for (b = 1; b <= 9; b++)
		{
			mult = a * b;
			_putchar(44);
			_putchar(32);
			if (mult <= 9)
			{
				_putchar(32);
				_putchar(mult + 48);
			}
			else
			{
				_putchar((mult / 10) + 48);
				_putchar((mult % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
