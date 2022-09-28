#include "main.h"

/**
*_pow_recursion - returns x power y
*@x: number
*@y: power
*Return: x power y, except y<0
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
