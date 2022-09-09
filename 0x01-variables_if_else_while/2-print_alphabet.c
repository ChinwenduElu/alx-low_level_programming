#include <stdio.h>

/**
*main - print all alphabet lowercase a-z
*Return: Returns 0 on success
*/

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');

	return (0);
}
