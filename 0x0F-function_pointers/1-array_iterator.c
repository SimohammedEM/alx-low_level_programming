#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - it is used to print each an array element on a new line
 * @array: it means the array
 * @action: it is the pointer to print in regular or hex
 * @size: it means how many element to print
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
