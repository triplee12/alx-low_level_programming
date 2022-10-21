#include <stdlib.h>
#include <stdio.h>

__attribute__((constructor))void precode(void);

/**
 * precode - Do before main
 *
 * Description: Executes before main function.
 * Return: void (Nothing).
 */
__attribute__((constructor))void precode(void)
{
	printf(
"You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
