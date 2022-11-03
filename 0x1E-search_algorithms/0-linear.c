#include "search_algos.h"

/**
 * linear_search - A function that searches for a value in an array
 * @array: A pointer to the first element
 * @size: The number of elements
 * @value: The value to search for
 * Return: The first index of the value, otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; (i < size) && (array); i++)
	{
		if (*(array + i) == value)
		{

			printf("Value checked array[%d] = [%d]\n", (int)i, *(array + i));
			return (i);
		}
		else
		{
			printf("Value checked array[%d] = [%d]\n", (int)i, *(array + i));
		}
	}
	return (-1);
}
