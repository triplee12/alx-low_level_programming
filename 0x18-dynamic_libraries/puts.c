#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: string character pointer
 * Return: Always 0
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a])
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
