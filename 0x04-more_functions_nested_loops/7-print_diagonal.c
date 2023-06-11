#include "main.h"

/**
 * print_diagonal - A function that draws a diagonal line
 * @n: number of times to print main character
 * If n is 0 or less, the function only print a \n
 * Return: Always 0 (Success)
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (i = 0; i < n; i++)
	{
	for (j = 0; j < i; j++)
	{
	_putchar(32);
	}
	_putchar(92);
	_putchar('\n');
	}
	}
}
