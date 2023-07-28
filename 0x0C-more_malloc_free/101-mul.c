#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - used to check if a string contains a non-digit char
 * @str: is string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - to return the length of a string
 * @str: string to be evaluated
 *
 * Return: is the length of the string
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * errors - his function is to handle errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - the rul here is to multiplie two positive numbers
 * @argn: number of arguments
 * @arga: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argn, char *arga[])
{
	char *str1, *str2;
	int lent1, lent2, lent, i, cary, digit_1, digit_2, *the_result, x = 0;

	str1 = arga[1], str2 = arga[2];
	if (argn != 3 || !is_digit(str1) || !is_digit(str2))
		errors();
	lent1 = _strlen(str1);
	lent2 = _strlen(str2);
	lent = lent1 + lent2 + 1;
	the_result = malloc(sizeof(int) * lent);
	if (!the_result)
		return (1);
	for (i = 0; i <= lent1 + lent2; i++)
		the_result[i] = 0;
	for (lent1 = lent1 - 1; lent1 >= 0; lent1--)
	{
		digit_1 = str1[lent1] - '0';
		cary = 0;
		for (lent2 = _strlen(str2) - 1; lent2 >= 0; lent2--)
		{
			digit_2 = str2[lent2] - '0';
			cary += the_result[lent1 + lent2 + 1] + (digit_1 * digit_2);
			the_result[lent1 + lent2 + 1] = cary % 10;
			cary /= 10;
		}
		if (cary > 0)
			the_result[lent1 + lent2 + 1] += cary;
	}
	for (i = 0; i < lent - 1; i++)
	{
		if (the_result[i])
			x = 1;
		if (x)
			_putchar(the_result[i] + '0');
	}
	if (!x)
		_putchar('0');
	_putchar('\n');
	free(the_result);
	return (0);
}
