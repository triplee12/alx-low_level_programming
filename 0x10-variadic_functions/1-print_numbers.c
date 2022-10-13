#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers with identify separator
 * @separator: string to be printed between numbers
 * @n: the number of integers passed to the function
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list params;

	va_start(params, n);

	for (i = 0; i < (n - 1) && n != 0; i++)
	{
		if (!separator)
			printf("%d", va_arg(params, int));
		else
			printf("%d%s", va_arg(params, int), separator);
	}

	if (n)
		printf("%d\n", va_arg(params, int));
	else
		printf("\n");

	va_end(params);
}
