#include <stdio.h>

/**
*main - prints numbers of base 16 in lowercase
*Return: returns 0 on success
*/

int main(void)
{
	char n = '0';
	char hexadecimal = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}

	while (hexadecimal <= 'f')
	{
		putchar(a_to_f);
		hexadecimal++;
	}

	putchar('\n');

	return (0);
}
