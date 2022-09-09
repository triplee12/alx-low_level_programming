#include <unistd.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: prints lowercase alphabets in reverse
 * Return: 0 (success), otherwise 1 (error)
 */

int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}

