#include "main.h"

/**
*_isalpha - checks for alphabetic character
*@c: chracter to check
*Return: 1 if lowercase, 0 otherwise
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
