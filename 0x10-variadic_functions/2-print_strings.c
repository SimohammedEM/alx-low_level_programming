#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - used to Print strings
 * @separator: is The string printed between strings.
 * @n: is The number of strings.
 * @...: variable number.
 *
 * Description: If separator is NULL, not printed.
 *              If one of the strings if NULL, (nil) printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *strin;
	unsigned int i;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		strin = va_arg(strings, char *);

		if (strin == NULL)
			printf("(nil)");
		else
			printf("%s", strin);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
