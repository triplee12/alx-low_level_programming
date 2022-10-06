#include "main.h"
#include <stdlib.h>

/**
 * array_range - creaates an array of integers in ascending order
 * @min: minimium value
 * @max: maximium value
 * Return: pointer on success, otherwise NULL
 */

int *array_range(int min, int max)
{
	int i, n;
	int *ptr;

	if (min > max)
		return ('\0');

	n = (max - min) + 1;
	ptr = malloc(sizeof(int) * n);

	if (ptr == NULL)
		return ('\0');

	for (i = 0; i < n; i++)
		ptr[i] = min + i;

	return (ptr);
}
