#include "main.h"
#include <stdlib.h>

/**
* _realloc - reallocates a memory block using malloc and free
* @ptr: pointer to the memory previously allocated
* @old_size: size, in bytes, of the allocated space of ptr
* @new_size: new size, in bytes, of the new memory block
* Return: ptr
* If new_size > old_size, added memory should not be initialized
* If new_size == old_size return ptr
* If ptr is NULL, then the call=to malloc(new_size)
* If new_size=zero, and ptr !NULL, the call=free(ptr). Return NULL
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);
		free(ptr);

	ptr = malloc(new_size);
		return (ptr);
}
