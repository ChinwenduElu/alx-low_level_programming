#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* _strdup - returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter.
* @str: string
* Return: pointer to the duplicated string. else NULL
*/

char *_strdup(char *str)
{
	char *duplicate;
	int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	duplicate = (char *)malloc(sizeof(char) * (i + 1));

	if (duplicate == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		duplicate[j] = str[j];

	return (duplicate);
}
