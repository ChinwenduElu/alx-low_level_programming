#include "main.h"

/**
* print_line - prints chracter '_' n times
* @n: number of chracter to daraw
*/

void print_line(int n)
{
	int count = n;

	for (count = n; count > '0'; count--)
		_putchar ('_');

	_putchar ('\n');
}
