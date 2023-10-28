#include "main.h"
/**
 *flip_bits- returns the number of bits you would need to
 *flip to get from one number to another
 *@m: the  number being used
 *@n:the number being used
 *Return: number of bits(unsigned int)
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m, bit_count = 0;

	while (result > 0)
	{
		bit_count += (result & 1);
		result >>= 1;
	}
	return (bit_count);
}
