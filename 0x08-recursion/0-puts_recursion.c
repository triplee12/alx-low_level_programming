#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion() - Prints a string, followed by a new line.
 * @s: Pointer string literal argument
 * Reutrn: Returns void
 */

void _puts_recursion(char *s)
{
	if (s[0] == '\0')
		return;
	s++;
	_putchar(s[0]);
	_puts_recursion(s);
	_putchar('\n');
}
