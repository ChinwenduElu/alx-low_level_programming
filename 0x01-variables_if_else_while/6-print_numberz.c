#include <stdio.h>

/**
*main - prints all single digit numbers of base 10
*Return: Returns 0 on success
*/

int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}

	putchar('\n');

	return (0);

}
