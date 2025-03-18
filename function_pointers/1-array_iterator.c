#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator- Entry point
 *
 * Description: callback fucntion pointers for printing array
 * each funtion prints a specif int format.
 * @array: the integer array.
 * @size: the size of the array.
 * @action: the funtion pointer.
 * Return: void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action && array && size)
	{
		unsigned int i;

		for (i = 0; i < size; i++)
		action(array[i]);
	}
}
