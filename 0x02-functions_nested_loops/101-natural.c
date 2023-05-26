#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sum = 0;

	for (int number = 1; number < 1024; number++)

	{
		if ((number % 3) == 0 || (number % 5) == 0)
	{
		sum += number;
	}
	}
	printf("%d\n", sum);

	return (0);
}
