#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - Creates a 2 dimensional array of integers
*
* @width: Width/rows of the 2D array
*
* @height: Height/columns of the 2D array
*
* Return: Pointer to a 2 dimenstional array of integers
*/

int **alloc_grid(int width, int height)
{
	int i, j, f, **ptr_mem;

	if (width <= 0 || height <= 0)
		return ('\0');

	ptr_mem = malloc(sizeof(int *) * height);

	if (ptr_mem == NULL)
	{
		free(ptr_mem);
		return ('\0');
	}

	for (i = 0; i < height; i++)
	{
		ptr_mem[i] = malloc(sizeof(int) * width);

		if (ptr_mem[i] == NULL)
		{
			for (f = i; f >= 0; f--)
				free(ptr_mem[f]);

			free(ptr_mem);
			return ('\0');
		}

		for (j = 0; j < width; j++)
			ptr_mem[i][j] = 0;
	}

	return (ptr_mem);
}
