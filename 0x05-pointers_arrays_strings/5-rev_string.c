#include "main.h"

/**
 * rev_string - reverse string store in a valiable pointer
 * @s: valiable pointer that store the character string
 * Return: Always 0
 */

void rev_string(char *s)
{
	int i = 0;
	char *ptr_s;

	ptr_s = s;

	while (s[i])
		i++;
	while (i--)
		ptr_s[i] += s[i];
}
