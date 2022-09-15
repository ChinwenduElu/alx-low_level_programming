#include "main.h"

/**
* print_line - prints chracter '_' n times
* @n: number of chracter to daraw
*/

void print_line(int n)
{
	int num = n;

	for (num = n; num > '0'; num--)
		_putchar('_');
		_putchar('\n');

	if (n <= '0')
	_putchar('\n');
}
