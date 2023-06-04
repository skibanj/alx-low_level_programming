#include "main.h"
#include <stdio.h>

/**
 * _isupper - a function that checks for upper case
 * @c: main character
 *
 * Return: Always 0 (Success)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		putchar('\n');
		return (1);
	}
	else
	{
		putchar('\n');
		return (0);
	}
}
