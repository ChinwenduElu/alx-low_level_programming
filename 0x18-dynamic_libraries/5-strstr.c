#include "main.h"

/**
* _strstr - finds the first occurrence of the substring in haystack
* @haystack: string
* @needle: substring
* Return: pointer to the beginning of located substring or
* NULL if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
	char *nhaystack;
	char *nneedle;

	while (*haystack != '\0')
	{
		nhaystack = haystack;
		nneedle = needle;

		while (*haystack != '\0' && *nneedle != '\0' && *haystack == *nneedle)
		{
			haystack++;
			nneedle++;
		}
		if (!*nneedle)
			return (nhaystack);
		haystack = nhaystack + 1;
	}
	return (0);
}
