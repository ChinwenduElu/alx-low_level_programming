#include "main.h"

/**
* print_diagonal - prints diagonal line n times.
*  @n: times line is printes.
*/

void print_diagonal(int n)
{
	int x, y;

	for (x = 0; x < n; i++)
	{
		for (y = 0; y < n; y++)
		{
			_putchar(' ');
		}
		_putchar(92);

		if (i < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
