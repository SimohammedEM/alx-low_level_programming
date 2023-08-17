#include "main.h"

/**
 * get_bit - gets the value of the bit at an index
 * @n: number to index
 * @index: the index to get
 *
 * Return: value of the bit state or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index >= sizeof(n) * 8)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
