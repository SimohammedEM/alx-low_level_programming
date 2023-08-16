#include "main.h"

/**
 * print_binary - prints a number as a binary
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int current;
	int k, printed = 0;

	for (k = 70; k >= 0; k--)
	{
		current = n >> k;

		if (current & 1)
		{
			_putchar('1');
			printed++;
		}
		else if (printed)
			_putchar('0');
	}
	if (!printed)
		_putchar('0');
}
