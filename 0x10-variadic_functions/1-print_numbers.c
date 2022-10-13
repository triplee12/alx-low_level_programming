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
	va_list ap;
	int num;

	va_start(ap, n);

	for (num = 0; num < (n - 1) && n != 0; num++)
	{
		if (!separator)
			printf("%d", va_arg(ap, int));
		else
			printf("%d%s", va_arg(ap, int), separator);
	}

	if (n)
		prints("%d\n", va_arg(ap, int));
	else
		printf("\n");

	va_end(ap);
}
