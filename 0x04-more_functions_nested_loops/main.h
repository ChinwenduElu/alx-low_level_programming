#ifndef MAIN_H
#define MAIN_H

/**
* _putchar - puts character to standard output
* @c: character to put to standard output
*/

int _putchar(char c);

/**
* _isupper - checks for uppercase character
* @c: character to be checked
* Return: 1 if true, 0 if false
*/

int _isupper(int c);


/**_isdigit - checks for last digit
*@c: character
* Return: 1 if true, 0 if false
*/


int _isdigit(int c);


/**
*mul - multiplies two integers
* @a: integer 1
* @b: integer 2
* Return: product
*/


int mul(int a, int b);

/**
 *
 * *print_numbers- prints numbers 0 - 9
 *
 * */


void print_numbers(void);

/**
*print_most_numbers- prints numbers 0 - 9, except 2 & 4
*/

void print_most_numbers(void);

/**
*more_numbers- prints 10 times numbers 0-14
*/

void more_numbers(void);


/**
* print_line - prints chracter '_' n times
* @n: number of chracter to daraw
*/

void print_line(int n);

#endif
