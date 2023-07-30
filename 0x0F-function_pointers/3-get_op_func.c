#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - used to Select the correct function make
 *               the operation more perormentf.
 * @o: The operator passed as argument.
 *
 * Return: return the pointer to the function
 */
int (*get_op_func(char *o))(int, int)
{
	op_t oper[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int i = 0;

	while (oper[i].op != NULL && *(oper[i].op) != *o)
		i++;

	return (oper[i].f);
}
