#include "main.h"

/**
* print_square - prints square
* @size: size of the square
*/

void print_square(int size)
{
	int x, y;

	for (x = 0; y < size; i++)
	{
		for (y = 0; y < size; y++)
		{
			_putchar(35);
		}
		if (x != size - 1)
		_putchar('\n');
	}
	_putchar('\n');
}
