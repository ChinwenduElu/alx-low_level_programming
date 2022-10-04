#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* str_concat - concatenates two strings
* @s1: string 1
*@s2: string 2
* Return: pointer to concatenated string
*/

char *str_concat(char *s1, char *s2)
{
	char *new_string;
	int x = 0, y = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + i))
		x++, i++;
	while (*(s2 + j))
		y2++, j++;
	y++;

	new_string = malloc(sizeof(char) * (x + y));

	if (new_string == NULL)
		return (NULL);
	i = 0, j = 0;

	while (i < x)
	{
		*(new_string + i) = *(s1 + i);
			i++;
	}

	while (j < y)
	{
		*(new_string + i) = *(s2 + j);
			i++, j++;
	}
	return (new_string);
}
