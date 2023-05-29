#include "main.h"
#include <stdio.h>

/**
 * _puts - printing a string followed by a new line
 * @str: The string we are printing
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
