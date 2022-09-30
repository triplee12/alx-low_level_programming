#include "main.h"
#include <stdio.h>

/**
 * multiply - Print the product of two numbers
 * @n1: First number
 * @n2: Second number
 * Return: 0 on successfull, otherwise 1
 */

int multiply(int n1, int n2)
{
	if (n1 == '\0')
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int result = n1 * n2;

		printf("%d\n", result);
	}
	return (0);
}
