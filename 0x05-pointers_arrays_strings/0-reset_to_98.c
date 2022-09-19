#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int n, *ptr_n;

	n = 402;
	ptr_n = &n;
	printf("n=%d\n", n);
	*ptr_n =98;
	reset_to_98(ptr_n);
	printf("n=%d\n", n);
	return (0);
}
