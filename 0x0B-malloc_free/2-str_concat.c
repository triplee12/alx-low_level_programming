#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenate two  strings literals together
 * @s1: First string
 * @s2: Second string to concatenate with s1
 * Return: concatenated string, or NULL if it fails
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int s1_len = 0;
	unsigned int s2_len = 0;
	char *ptr_mem;
	unsigned i, j;

	if (s1 == NULL)
		s1 = "";

	while (*(s1 + s1_len) != '\0')
		s1_len++;

	while (*(s2 + s2_len) != '\0')
		s2_len++;

	ptr_mem = malloc(1 + (s1_len * sozeof(*s1)) + (s2_len * sizeof(*s2)));
	if (ptr_mem == NULL)
		return '\0';

	for (i = 0; i < s1_len; i++)
		ptr_mem[i] = *(s1 + i);

	for (j = 0; j < s2_len; j++)
		ptr_mem[i] = *(s2 + j);

	return (ptr_mem);
