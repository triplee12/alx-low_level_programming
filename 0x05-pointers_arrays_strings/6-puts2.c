#include "main.h"

/**
 * puts2 - print every other character of a string
 * @str: pointer string valiable
 * Return: Always 0
 */

void puts2(char *str)
{
	int len;
	for (len = 0; len < str[len] * 2; len++)
	{
		_putchar(str[len]);
	}
}
