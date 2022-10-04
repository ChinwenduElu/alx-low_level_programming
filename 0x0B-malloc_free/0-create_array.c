#include "main.h"
#include <stdlib.h>
#include <stdlib.h>

/**
* create_array - creates an array of chars, initilized with a char
* @size: size of the array
*@c: char to fill array values
* Return: pointer to arrray
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	int i;

	if (size <= 0)
		return (NULL);
	array = malloc(sizeof(c) * size);

	if (array == NULL)
		return (NULL);

	while (i < (int)size)
	{
		*(array + i) = c;
		i++;
	}
	*(array + i) = '\0';
	return (array);
}
