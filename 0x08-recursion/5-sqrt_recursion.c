#include "main.h"

/**
* sq_root - finds the square root of n
* @n: number
* @num: test
* Return: natural square root or -1
*/

int sq_root(int n, int num)
{
	if (num * num == n)
		return (num);
	else
		return (-1);

	return (sq_root(n, num + 1));
}

/**
*_sqrt_recursion - returns square root of n
*@n: number
*Return: root n or -1
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sq_root(n, 0));
}
