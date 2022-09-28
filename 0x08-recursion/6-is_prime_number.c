#include "main.h"

/**
* is_prime - checks if number is prime
* @num: number.
* @div: divisor
* Return: 1 if n is prime, 0 if n is not prime
*/

int is_prime(int num, int div)
{
	if (num % div == 0)
	{
		if (num == div)
			return (1);
		if (num % div == 0)
			return (0);
	}
	return (0 + is_prime(num, div + 1));
}

/**
* is_prime_number - returns 1 if integer is prime
* @n: integer
* Return: 1 if the input integer is a prime number, otherwise return 0
*/

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
