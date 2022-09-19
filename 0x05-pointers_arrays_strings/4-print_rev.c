#include "main.h"

/**
 * print_rev - print strings in reverse order
 * @s: string character to reverse using string reference pointer
 * Return: Always 0
 */

void print_rev(char *s)
{
	int i;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
