#include "function_pointers.h"

/**
 * int_index - Entry point
 *
 * Description: funtion pointers for index searching.
 * @array: the array.
 * @size: the number of elemnts
 * @cmp: the funtion pointer
 * Return: return -1 (failed)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
	}
}

