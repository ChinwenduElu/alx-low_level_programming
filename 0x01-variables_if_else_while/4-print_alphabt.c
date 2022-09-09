#include <stdio.h>

/**
*main - print lowercase alphabet a-z except q and e
*Return: Returns 0 on success
*/

int main(void)
{
	char lower_alpha = 'a';

	while (lower_alpha <= 'z')
	{
		if ((lower_alpha != 'q') && (lower_alpha != 'e'))
		{
			putchar(lower_alpha);
		}
		lower_alpha++;
	}

	putchar('\n');

	return (0);
}
