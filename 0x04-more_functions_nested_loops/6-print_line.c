#include "main.h"

/**
 *  print_line - A function that draws straight line
 *  @n: our character to be used as number of times to be printed
 *  Return: Always 0 (Success)
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)

	{
		_putchar('_');
	}

	_putchar('\n');
}
