#include "main.h"

/**
 * mul - a function that multiplies two integers
 * @int a, @ int b: our main character
 * Return: Always 0 (Success)
 */

int mul(int a, int b){
	int num1 = 98;
	int num2 = 1024;
	int num3 = -402;
	int num4 = -4096;

	int result1 = num1 * num2;
	int result2 = num3 * num4;

	putchar('%d\n%d', result1, result2);
}
