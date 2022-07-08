//#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 * array_iterator - executes a function given as a parameter on each
 *                  element of an array
 * @array: integer array
 * @size: size of the array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
