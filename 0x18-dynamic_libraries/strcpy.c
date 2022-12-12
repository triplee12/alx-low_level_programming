#include "main.h"

/**
 * _strcpy - copie a string from source to destination
 * @source: the string source
 * @dest: the string destination
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *source)
{
	int i;

	for (i = 0; source[i] != '\0'; i++)
	{
		dest[i] = source[i];
	}
	dest[i] = '\0';
	return (dest);
}
