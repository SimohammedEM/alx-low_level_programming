#include "main.h"

/**
 * get_endianness - returbs the endien
 * Return: 0 for big, 1 for small
 */
int get_endianness(void)
{
	unsigned int k = 1;
	char *d = (char *) &k;

	return (*d);
}
