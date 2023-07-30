#ifndef CALC_H
#define CALC_H
/**
 * struct op - it is A struct of operation.
 * @op: it is The operator.
 * @f: it is The associated function.
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_div(int a, int b);
int op_sub(int a, int b);
int op_add(int a, int b);
int op_mod(int a, int b);
int op_mul(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
