#include "main.h"

/**
 * flip_bits - returns the number of bits to change
 * transform one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to convert numbers
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int z, cnt = 0;
	unsigned long int t;
	unsigned long int k = n ^ m;

	for (z = 63; z >= 0; z--)
	{
		t = k >> z;
		if (t & 1)
			cnt++;
	}

	return (cnt);
}

