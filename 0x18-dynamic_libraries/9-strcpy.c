#include "main.h"
#include <stdio.h>

/**
*_strcpy - copies the string pointed to by src to the buffer pointed by dest
*@dest: copy source to this buffer
*@src: source to copy
*Return: copy of original source
*/

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
			if (*(src + count) == '\0')
				break;
			count++;
	}
	return (dest);
}
