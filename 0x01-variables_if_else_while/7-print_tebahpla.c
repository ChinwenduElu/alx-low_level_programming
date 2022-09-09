#include <stdio.h>

/**
*main - print lowercase alphabet reversed
*Return: returns 0 on success
*/

int main(void)
{
	char lower_alpha = 'z';

	while (lower_alpha >= 'a')
	{
		putchar(lower_alpha);
		lower_alpha--;
	}

	putchar('\n');

	return (0);
}
