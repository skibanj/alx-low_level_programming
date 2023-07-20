#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @src: the source string that will be concatenated
 * @dest: destination string
 * Return: Always 0 (Success)
 */

char *_strcat(char *dest, char *src)
{
	char dest_end = dest;

	while (*dest_end != '\0')
	{

		dest_end++;
	}

	while (*src != '\0')
	{
		*dest_end = *src;
		dest_end++;

		src++;
	}

	*dest_end = '\0';

	return (dest);
}
