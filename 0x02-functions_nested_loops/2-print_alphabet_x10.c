#include "main.h"

/**
*print_alphabet_x10- prints all lowercase alphabets
*Return: 0
*/


void print_alphabet_x10(void)

{
	char alphabet;
	int count;

	for (count = 1; count <= 10; count++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
		_putchar(alphabet);
		}
	}
	_putchar('\n');
}
