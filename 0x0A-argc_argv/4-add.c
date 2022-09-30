#include "main.h"
#include <stdio.h>

/**
 * additionnum - Calculate sum of numbers
 * @n1: First number
 * @...: Optional arguments
 * Return: 0 on successful, otherwise 1
 */

int additionnum(int n1, ...)
{
	int result = 0;

	va_list argptr;
	va_start(argptr, n1);

	if (n1 == '\0')
		printf("0\n");
	if else (n1 != *int)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (int i = 0; i < n1; ++i)
			result += va_arg(argptr, int);
		printf("%d\n", result);
	}

	va_end(argptr);

	return (0);
}
