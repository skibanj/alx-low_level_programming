#include "main.h"

/**
 * print_sign - a function that prints the sign of a number
 *@n: The main character
 * Return: 1 for positive, 0 for 0, -1 for negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
