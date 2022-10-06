#include "main.h"
#include <stdlib.h>

/**
* array_range - creates an array of integers,
* ordered from min to max
* @max: maximum number
* @min: minimum number
* Return: pointer to the created array else,
* NULL, if min > max or malloc fails
*/

int *array_range(int min, int max)
{
	int *pointer;
	int i;
	int n = (max - min + 1);

	if (min > max)
		return (NULL);

	pointer = malloc(sizeof(int) * n);

	if (pointer == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
		pointer[i] = min++;

	return (pointer);
}
