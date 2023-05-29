#include "main.h"

/**
 * swap_int - a function that swaps the value of two integers
 * @a: The first integer
 * @b: The second integer
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

