#include "search_algos.h"

/**
 * print_array - prints array
 * @array: a pointer to the first element of the searched list
 * @size: the size of the array
 *
 * Return: (void)
 */
void print_array(int *array, size_t size)
{
	size_t idx = 0;

	printf("Searching in array: ");
	while (idx < size)
	{
		printf("%d, ", array[idx]);
		idx++;
	}
	printf("%d\n", array[idx]);
}

/**
 * binary_search - implementation of binary search
 * @array: a pointer to the first element of the searched list
 * @size: the size of the array
 * @value: the value two search for
 *
 * Return: (int) the first index where <value> is located
 * ------- (-1) if the value is not present, or array is null
 */
int binary_search(int *array, size_t size, int value)
{
	size_t idx;
	size_t left = 0;
	size_t right = size - 1;

	if (!array)
		return (-1);
	while (left <= right)
	{
		print_array(array + left, right - left);
		idx = ((left + right) / 2);
		if (array[idx] < value)
			left = idx + 1;
		else if (array[idx] > value)
			right = idx - 1;
		else
			return (idx);
	}
	return (-1);
}
