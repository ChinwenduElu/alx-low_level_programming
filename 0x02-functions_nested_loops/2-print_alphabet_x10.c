#include "main.h"

/**
*print_alphabet_x10- prints all lowercase alphabets
*Return: 0
*/


void print_alphabet_x10(void)

{
	char alphabet = 'a';
	int count;

	for (count = 1; count <= 10; count++)
	{
		while (alphabet <= 'z')
		{
		_putchar(alphabet);
		alphabet++;
		}
	}
	_putchar('\n');
}
