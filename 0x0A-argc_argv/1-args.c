#include "main.h"
#include <stdio.h>

/**
 * printargsnum - Print number of argument passed
 * @argc: Program argument count
 * @argv: Program argument value
 * Return: Nothing
 */

void printargsnum(int argc, char *argv[])
{
	for (int i = 0; i < argc; ++i)
		printf("%d\n", argc);
}
