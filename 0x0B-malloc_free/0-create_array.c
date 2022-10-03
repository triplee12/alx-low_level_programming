#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - create array of characters, and initializes it with a specific char
 * @size: The size of byte to initialize
 * @c: Character to initialize
 * Return: A pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int s;
	char *arr;

	if (size == '\0')
		return ('\0');
	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return ('\0');

	for (s = 0; s < size; s++)
		arr[s] = c;

	arr[size] = '\0';

	return (arr);
}
