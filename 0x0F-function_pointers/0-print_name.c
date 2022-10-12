#include <stdio.h>
#include "main.h"

/**
 * print_name - prints a name as is
 * @name: name of the person
 * @f: function pointer that returns nothing
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	char *name_ptr = (char *)name;
	void (*fun_ptr)(char) = f;

	if (!name_ptr || !f)
		return;
	fun_ptr(name_ptr);
}
