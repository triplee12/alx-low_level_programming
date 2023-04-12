#include "search_algos.h"
/**
 * linear_search - implementation of linear search
 * @array: a pointer to the first element of the searched list
 * @size: the size of the array
 * @value: the value two search for
 *
 * Return: (int) the first index where <value> is located
 * ------- (-1) if the value is not present, or array is null
 */
int linear_search(int *array, size_t size, int value)
{
	size_t idx;

	if (!array)
		return (-1);
	for (idx = 0; idx < size; idx++)
	{
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
	}
	return (-1);
}
