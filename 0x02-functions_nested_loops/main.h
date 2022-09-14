#ifndef _MAIN_H_
#define _MAIN_H_

/**
*_putchar - writes the character c to stdout
*@c: The character to print
*
*Return: On success 1.
*On error, -1 is returned, and error is set appropriately
*/

int _putchar(char c);

/**
* prints lowercase alphabet
*/

void print_alphabet(void);

/**
* prints 10 times lowercase on new line
*/

void print_alphabet_x10(void);

/**checks for lowercase character
* returns 1 if c is lowercase
* and 0 if otherwise
*/

int _islower(int c);

/**_isalpha - checks for alphabetic character
*@c: chracter to check
*Return: 1 if lowercase, 0 otherwise
*/

int _isalpha(int c);


/**
*print_sign - checks for alphabetic character
*@n: chracter to check
*Return: 1 if >0, 0 if =0 and -1 if <0
*/

int print_sign(int n);

/**
*_bs - checks for alphabetic character
*Return: an absolute value
*/

int _abs(int);

#endif
