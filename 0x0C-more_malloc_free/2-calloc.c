#include "main.h"
#include <stdlib.h>

/**
* _calloc -  allocates memory for an array of nmemb,
* elements of size bytes each
* @nmemb: number of elements in array
* @size: byte size
* Return: pointer to the allocated memory else,
* NULL, if nmemb or size is 0 or malloc fails
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointer = malloc(nmemb * size);

	if (pointer == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		pointer[i] = 0;
	return (pointer);
}
