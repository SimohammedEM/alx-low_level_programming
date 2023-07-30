#include "function_pointers.h"
/**
 * int_index - means return index place if comparison = true, and -1 if else
 * @size:used to define the size of the elements in this array
 * @cmp: it means the pointer to function of one of the 3 in the main
 * @array: it means the array of this operatiopn
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
