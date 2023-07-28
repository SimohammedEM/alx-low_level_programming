#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - it is to concatenates x bytes of a string to another string
 * @X1: string which we want to append to
 * @X2: string which we want to concatenate from
 * @n: number of the bytes from s2 to concatenate to s1
 *
 * Return: Return to  pointer to the resulting string
 */
char *string_nconcat(char *X1, char *X2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, lent1 = 0, lent2 = 0;

	while (X1 && X1[lent1])
		lent1++;
	while (X2 && X2[lent2])
		lent2++;

	if (n < lent2)
		s = malloc(sizeof(char) * (lent1 + n + 1));
	else
		s = malloc(sizeof(char) * (lent1 + lent2 + 1));

	if (!s)
		return (NULL);

	while (i < lent1)
	{
		s[i] = X1[i];
		i++;
	}

	while (n < lent2 && i < (lent1 + n))
		s[i++] = X2[j++];

	while (n >= lent2 && i < (lent1 + lent2))
		s[i++] = X2[j++];

	s[i] = '\0';

	return (s);
}
