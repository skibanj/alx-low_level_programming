#include "main.h"

/**
 * _print_rev_recursion - Printing in Reverse
 * @s: Main character
 * Return: Always 0 (Success)
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
