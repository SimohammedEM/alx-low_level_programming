#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - we want to Print the result of simple operations.
 * @arguv: An array of pointers to the arguments.
 * @arguc: The number of arguments supplied to the program.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) arguc, char *arguv[])
{
	char *op;
	int num1, num2;

	if (arguc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(arguv[1]);
	op = arguv[2];
	num2 = atoi(arguv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && num2 == 0) ||
	    (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(num1, num2));

	return (0);
}
