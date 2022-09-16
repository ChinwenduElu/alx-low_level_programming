#include "main.h"

/**
* print_line - prints chracter '_' n times
* @n: number of chracter to daraw
*/

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
