#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - as a result Returns the sum of two numbers.
 * @a: it is The first number of sum operation.
 * @b: it is The second number.
 *
 * Return: return The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - as a result Returns the difference of two numbers.
 * @a: it is The first number.
 * @b: it is The second number.
 *
 * Return: return The difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - as a result Returns the product of two numbers.
 * @a: it is The first number.
 * @b: it is The second number.
 *
 * Return: return The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - as a result Returns the division of two numbers.
 * @a: it is The first number.
 * @b: it is The second number.
 *
 * Return: reuturn  The quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - as a result Returns the remainder of the division of two numbers.
 * @a: it is The first number.
 * @b: it is The second number.
 *
 * Return: return The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
