#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - it is to print a name by using the pointer to a function
 * @name: it means the string that we want to add
 * @f: it means the pointer to function
 * Return: it will be return nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
