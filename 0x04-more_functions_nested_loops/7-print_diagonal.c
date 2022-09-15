#include "main.h"

/**
* print_diagonal - prints diagonal line n times.
* @n: times line is printes.
*/

void print_diagonal(int n)
{
	int x, y;

	if (n > '0')
	{
		for (x = '1'; x <= n; x++)
		{
			for (y = '1'; y < x; y++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
