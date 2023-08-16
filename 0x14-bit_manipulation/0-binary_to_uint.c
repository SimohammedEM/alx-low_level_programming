#include "main.h"

/**
 * binary_to_uint - to convert  binary number to unsigned int
 * @b: the binary number
 *
 * Return: the binary number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int n = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		n = 2 * n + (b[i] - '0');
	}

	return (n);
}
