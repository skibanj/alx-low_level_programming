#include "main.h"

/**
 * print_alphabet_x10 - a program that makes alphabets prints 10 times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char letter = 'a';
	int i = 0;

	while (i < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}

	_putchar('\n');
	i++;

	}

}
