#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @src: the source string that will be concatenated
 * @dest: destination string
 * Return: Always 0 (Success)
 */

char *_strcat(char *dest, char *src)
{
	char dest[100] = "Hello, ";
	const char src = "world!";

	_strcat(dest, src);

	printf("%s\n", dest);

	return (dest);
}
