#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenate two  strings literals together
 * @s1: First string
 * @s2: Second string to concatenate with s1
 * Return: concatenated string, or NULL if it fails
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int s1_length = 0;
	unsigned int s2_length = 0;
	char *ptr_mem;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (*(s1 + s1_length) != '\0')
		s1_length++;

	while (*(s2 + s2_length) != '\0')
		s2_length++;

	ptr_mem = malloc(1 + (s1_length * sizeof(*s1)) + (s2_length * sizeof(*s2)));
	if (ptr_mem == NULL)
		return ('\0');

	for (i = 0; i < s1_length; i++)
		ptr_mem[i] = *(s1 + i);

	for (j = 0; j < s2_length; j++, i++)
		ptr_mem[i] = *(s2 + j);

	return (ptr_mem);
}
