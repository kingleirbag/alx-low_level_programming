#include "search_algos.h"

/**
  * _binary_search - a function searches for a value in a sorted array
  * of integers using binary search.
  * @array: pointer to the first element of the array to search.
  * @left: starting index of the [sub]array to search.
  * @right: ending index of the [sub]array to search.
  * @value: value to search
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t count;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (count = left; count < right; count++)
			printf("%d, ", array[count]);
		printf("%d\n", array[count]);

		count = left + (right - left) / 2;
		if (array[count] == value)
			return (count);
		if (array[i] > value)
			right = count - 1;
		else
			left = count + 1;
	}

	return (-1);
}

/**
  * exponential_search - a function that searches for a value in a sorted array
  *                      of integers using exponential search.
  * @array: pointer to the first element of the array to search.
  * @size: number of elements in the array.
  * @value:  value to searh.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t index = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (index = 1; index < size && array[index] <= value; index = index * 2)
			printf("Value checked array[%ld] = [%d]\n", index, array[index]);
	}

	right = index < size ? index : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", index / 2, right);
	return (_binary_search(array, index / 2, right, value));
}
