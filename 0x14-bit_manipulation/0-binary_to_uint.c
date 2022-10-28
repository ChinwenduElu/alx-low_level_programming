#include "main.h"

/**
* binary_to_uint - converts a binary number to an
* unsigned int
* @b: pointer to a string of 0 and 1 chars
* Return: unsigned int or 0,
* if there is one or more chars in the string b,
* that is not 0 or 1 or,
* b is NULL
*/

unsigned int binary_to_uint(const char *b)
{
	int len = 0, i;
	unsigned int ui = 0;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
		len++;
	len -= 1;

	i = 0;

	while (b[i])
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (ui);

		if (b[i] == '1')
			ui += (1 * (1 << len));
		i++;
		len--;
	}
	return (ui);
}
