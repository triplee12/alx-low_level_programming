#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - prints the sum of it's arguments
 *
 * @n: the number of arguments entered
 *
 * Return: sum of the arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	va_start(ap, n);

	sum = 0;
	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, unsigned int);

	va_end(ap);

	return (sum);
}
