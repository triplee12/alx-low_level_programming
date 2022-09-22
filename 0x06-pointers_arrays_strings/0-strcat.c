#include "main.h"

/**
 * _strcat - concatenates two strings
 * @desk: pointer variable copy to
 * @src: pointer variable to copy from
 * Return: dest, the concatenated strings
 */

char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
