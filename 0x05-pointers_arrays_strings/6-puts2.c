#include "main.h"

/**
 * puts2 - print every other character of a string
 * @str: pointer string valiable
 * Return: Always 0
 */

void puts2(char *str)
{
	int len = 0;

	for (len; len < str[len]; len++)
	{
		if(str[len] % 2 == 0)
		{
			_putchar(str[len]);
			*str++;
		}
	}
}
