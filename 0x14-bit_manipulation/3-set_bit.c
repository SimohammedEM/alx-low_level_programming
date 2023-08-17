#include "main.h"

/**
 * set_bit - sets the bit at an index
 * @n: the number to change
 * @index: the bit to set
 *
 * Return: 1 for successful, -1 for error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1L << index));
}
