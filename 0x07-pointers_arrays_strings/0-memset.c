#include "main.h"

/**
* _memset - function fills the first n bytes of the memory area
* @s: memory area
* @b: constant byte
* @n: fills byte
* Return: a pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	int x = n; /* only accept positive sizes */

	if (x > 0)
	{
		int i;

		for (i = 0; i < x; i++)
			s[i] = b;
	}
	return (s);
}
