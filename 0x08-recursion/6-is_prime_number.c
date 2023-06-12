#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - A funtion that returns 1 if the integer is a prime number
 * @n: Main character
 * Return: 1 if integer is a prime number otherwise return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - recursively calculates if a number is a prime
 * @n: Main character
 * @i: iterator
 * Return: 1 if n is prime, 0 if not
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
