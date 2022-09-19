#include "main.h"

/**
 * _strlen - checks the lenght of s pointer
 * @s: character pointer
 * Return: Always 0
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}
