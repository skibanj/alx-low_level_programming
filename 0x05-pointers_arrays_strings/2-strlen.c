#include <stdio.h>

/**
 * _strlen - a function that returns the length of a string
 * @str: The length of a string
 * Return: Length of a @str
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
