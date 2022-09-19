#include "main.h"

/**
 * rev_string - reverse string store in a valiable pointer
 * @s: valiable pointer that store the character string
 * Return: Always 0
 */

void rev_string(char *s)
{
	int i, l;
	char *begin_ptr, *end_ptr, ch;

	l = strlen(s);

	begin_ptr = s;
	end_ptr = s;

	for (i = 0; i < l - 1; i++)
		end_ptr++;

	for (i = 0; i < l / 2; i++)
	{
		ch = *end_ptr;
		*end_ptr = *begin_ptr;
		*begin_ptr = ch;

		begin_ptr++;
		end_ptr--;
	}
}
