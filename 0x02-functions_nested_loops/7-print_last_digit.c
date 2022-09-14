#include "main.h"

/**
*print_last_digit- prints last digit of an integer
*@n: integer
*Return: last digit
*/

int print_last_digit(int n)
{
	_putchar(n % 10);

	return (n % 10);
}
