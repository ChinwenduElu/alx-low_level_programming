#include "main.h"

/**
*_abs - checks for alphabetic character
*@n: integer
*Return: an absolute value
*/

int _abs(int n)

{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (-n);

	return (0);
}
