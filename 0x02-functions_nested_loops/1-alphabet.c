#include "main.h"

/**
*main- prints all lowercase alphabets
*Return: 0
*/

int main(void)

{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}

	_putchar('\n');
	return (0);
}
