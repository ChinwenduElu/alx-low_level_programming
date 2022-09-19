#include "main.h"

/**
*swap_int - swaps value of two integer
*@a: integer 1
*@b: integer 2
*/

void swap_int(int *a, int *b)
{
	int swap = *a;

	*a = *b;
	*b = swap;
}
