#include "main.h"

/**
 * _islower - A program to check for lowercase character
 * @c: The main character
 * Return: 1 if character is lowercase and 0 for otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
