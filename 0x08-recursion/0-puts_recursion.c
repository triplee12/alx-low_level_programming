#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: Pointer string literal argument
 * Reutrn: Returns void
 */

void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(s[0]);
	_puts_recursion(s + 1);
}
