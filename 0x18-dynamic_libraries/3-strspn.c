#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: substring
* @accept: accepted bytes
* Return: number of bytes in the initial segment of s
*/

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;
	int n_bytes = 0;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n_bytes++;
				break;
			}
			if (accept[j + 1] == '\0' && s[i] != accept[j])
				return (n_bytes);
		}
		i++;
	}
	return (n_bytes);
}
