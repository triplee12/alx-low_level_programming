#include "main.h"
#include <stdio.h>

/**
 * printargname - Print the name of argument passed
 * @argc: Program argument count
 * @argv: Program argument value
 * Return: Nothing
 */

void printargname(int argc, char argv[])
{
	for (int i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
}
