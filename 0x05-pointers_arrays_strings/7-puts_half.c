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
* puts_half - prints half of a string, followed by a new line
* @str: string to print
*/

void puts_half(char *str)
{
	int idx;
	int length = _strlen(str);

	if (length % 2 != 0)
		idx = (length / 2) + 1;
	else
		idx = (length / 2);

	while (idx < length)
	{
		_putchar(*(str + idx));
		idx++;
	}
	_putchar('\n');
}
