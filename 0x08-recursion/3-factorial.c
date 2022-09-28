#include "main.h"
#include <stdio.h>

/**
 * factorial - Prints the factorial of a given number
 * @n: The number to factorize
 * Return: -1 if lower than 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
