#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - want to print anything
 * @format: is the list of types of arguments
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *strin, *separ = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separ, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", separ, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", separ, va_arg(list, double));
					break;
				case 's':
					strin = va_arg(list, char *);
					if (!strin)
						strin = "(nil)";
					printf("%s%s", separ, strin);
					break;
				default:
					i++;
					continue;
			}
			separ = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list);
}

