#include "search_algos.h"
#include <math.h>

/**
 * jump_search -a function tha searches for a value in an array of
 * integers using the Jump search algorithm
 *
 * @array: array argument
 * @size: size argument
 * @value: value to search argument
 * Return: the first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	int index, db, count, prev;

	if (array == NULL || size == 0)
		return (-1);

	db = (int)sqrt((double)size);
	count = 0;
	prev = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
		count++;
		prev = index;
		index = count * db;
	} while (index < (int)size && array[index] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, index);

	for (; prev <= index && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
