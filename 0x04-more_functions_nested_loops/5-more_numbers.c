#include "main.h"

/**
 * more_numbers - A function that prints more numbers
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int i, j;
	int num;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			num = j;
			if (num >= 10)
			{
				_putchar('0' + (num / 10));
				num %= 10;
			}
			_putchar('0' + num);
		}
		_putchar('\n');
	}
}
