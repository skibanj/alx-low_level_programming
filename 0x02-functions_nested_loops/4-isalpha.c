#include "main.h"

/**
 * _isalpha - a function that checks for alphabets
 *@c: The main character
 * Return: 1 if c is a letter and 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
