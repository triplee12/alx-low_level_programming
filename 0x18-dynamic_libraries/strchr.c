#include "main.h"

/**
 * _strchr - locates a character in a given string
 * @str: the given string
 * @c: the given string
 *
 * Return: (Success) a pointer to the first occurence of c
 * ------- (Fail) return a null pointer
 */

char *_strchr(char *str, char c)
{
	char *ptr;

	for (ptr = str; *ptr; ptr++)
		if (*ptr == c)
			return (ptr);
	return (NULL);
}
