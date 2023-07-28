#include "main.h"
#include <unistd.h>
/**
 * _putchar - we want to write the character c to stdout
 * @x: is The character to be printed
 *
 * Return: return On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char x)
{
	return (write(1, &x, 1));
}
