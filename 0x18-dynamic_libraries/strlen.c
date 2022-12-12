#include "main.h"

/**
 * _strlen - finds the length of a given string
 * @str: the given string
 *
 * Return: (Success) the length of the string
 * ------- (Fail) negative value
 */

int _strlen(char *str)
{
	char *ptr;

	if (str == NULL)
		return (-1);
	for (ptr = str; *ptr; ptr++)
		;
	return (ptr - str);
}
