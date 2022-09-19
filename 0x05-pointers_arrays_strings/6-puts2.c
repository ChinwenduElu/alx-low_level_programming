#include "main.h"

/**
* _strlen - returns the length of a string
* @s: string
* Return: length
*/

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

/**
* puts2 - prints one char out of 2 of a string.
* @str: input string.
* Return: no return.
*/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' && i < _strlen(str); i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
