#include "function_pointers.h"
#include <stddef.h>

/**
*array_iterator -  executes a function given as a
*parameter on each element of an array
*@size: array size
*@array: array
*@action: pointer to function
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}
