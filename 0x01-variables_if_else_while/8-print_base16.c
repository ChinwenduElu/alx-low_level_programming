#include <stdio.h>

/**
*main - prints numbers of base 16 in lowercase
*Return: returns 0 on success
*/

int main(void)
{
	int n = '0';
	int hexadecimal = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}

	while (hexadecimal <= 'f')
	{
		putchar(hexadecimal);
		hexadecimal++;
	}

	putchar('\n');

	return (0);
}
