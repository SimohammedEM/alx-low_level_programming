#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - This function Returns the sum of all its paramters.
 * @n: The number of paramters to do the sum operation.
 * @...: variable number of paramters for the sum operations.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - do the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list par;

	va_start(par, n);

	for (i = 0; i < n; i++)
		sum += va_arg(par, int);

	va_end(par);

	return (sum);
}
