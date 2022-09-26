#include "main.h"

/**
* _memcpy - copies n bytes from memory area src to memory area dest
* @dest: memory area destination
* @src: memory area
* @n:no of bytes to copy
* Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		*(dest + x) =  *(src + x);
	return (dest);
}
