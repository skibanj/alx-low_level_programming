#include "main.h"

/**
 * _pow_recursion - a raised to the power function
 * @x: first value
 * @y: valued raised to power
 * Return: -1 if y < 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
