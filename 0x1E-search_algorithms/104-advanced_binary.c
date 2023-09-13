#include "search_algos.h"

/**
 * rec_search - a function searches for a value in an array of
 * integers using the Binary search algorithm
 *
 * @array: input array argument
 * @size: size of the array argument
 * @value: value to search
 * Return: first index where value is located
 */
int rec_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t index;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (index = 0; index < size; index++)
		printf("%s %d", (index == 0) ? ":" : ",", array[index]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
	{
		if (half > 0)
			return (rec_search(array, half + 1, value));
		return ((int)half);
	}

	if (value < array[half])
		return (rec_search(array, half + 1, value));

	half++;
	return (rec_search(array + half, size - half, value) + half);
}

/**
 * advanced_binary -a function that  calls to rec_search to return
 * the index of the number
 *
 * @array: input array argument
 * @size: size of the array argument
 * @value: value to search
 * Return: the first index where value is located
 */
int advanced_binary(int *array, size_t size, int value)
{
	int index;

	index = rec_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
