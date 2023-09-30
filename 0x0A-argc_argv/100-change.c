#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int coin_checker(int cent);

/**
*main - prints the minimum number of coins to
*@argc: counts number of arguments
*@argv: stores the arguments
*Return: returns 1 or 0
*/
int main(int argc, char *argv[])
{
	int cent;
	int result;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);

	if (cent < 0)
	{
		printf("%d\n", (cent * 0));
		return (0);
	}
	result = coin_checker(cent);
	printf("%d\n", result);
	return (0);
}
/**
**coin_checker - checks for the minimum number of coins to
*make change for an amount of money.
*Return: returns 1 or 0
*@cent: money to check
*/
int coin_checker(int cent)
{
	int coins[] = {25, 10, 5, 2, 1};
	int i;
	int coins_count, remainder, total_coins = 0;

	if (cent < 0)
	{
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		coins_count = cent / coins[i];
		remainder = cent % coins[i];
		total_coins += coins_count;
		cent = remainder;
	}
	return (total_coins);
}
