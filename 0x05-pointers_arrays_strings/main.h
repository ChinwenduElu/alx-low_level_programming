#ifndef MAIN_H
#define MAIN_H

/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c);

/**
*reset_to_98 - takes a pointer to an int as parameter and updates it to 98
*@n: pointer to n
*/

void reset_to_98(int *n);

/**
*swap_int - swaps value of two integer
*@a: integer 1
*@b: integer 2
*/

void swap_int(int *a, int *b);

/**
* _strlen- prints string length
*@s: string
*Return: length
*/

int _strlen(char *s);


/**
*_puts - prints string followed by new line ti stdout
*@str: string
*/

void _puts(char *str);


/**
*print_rev - prints a string, in reverse, followed by a new line
*@s: string
*/

void print_rev(char *s);

/**
*rev_string- reverses a string
*@s: string
*/

void rev_string(char *s);

/**
*puts2 -  prints every other character of a string, followed by a new line
*@str: string
*/

void puts2(char *str);

#endif
