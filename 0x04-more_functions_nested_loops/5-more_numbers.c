#include "main.h"

/**
 * more_numbers - A function that prints more numbers
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int i, j;

	for (j = 0; j <= 10; i++)
	{
		for (i = 0; i <= 14; i++)
		{
		if (i >= 10)
		_putchar('1');
		_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
