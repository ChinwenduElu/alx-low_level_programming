#include "holberton.h"

/**
* _memset - function fills the first n bytes of the memory area
* @s: memory area
* @b: constant byte
* @n: fills byte
* Return: a pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		*(s + x) =  b;
	return (s);
}
