#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count = 0;

	while (count <= 9)
	{
		putchar("%d", count);

		count++;
	}

	putchar("\n");


	return (0);
}
