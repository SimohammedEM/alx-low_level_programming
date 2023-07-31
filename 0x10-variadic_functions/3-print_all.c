#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function to print anything
 * @format: is the list of types of arguments
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *A, *B = "";

	va_list lst;

	va_start(lst, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separ, va_arg(lst, int));
					break;
				case 'i':
					printf("%s%d", separ, va_arg(lst, int));
					break;
				case 'f':
					printf("%s%f", separ, va_arg(lst, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list);
}

