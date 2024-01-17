#include "search_algos.h"

/**
  * _binary_search - Searches value in a sorted array of with binary search
  * @array: pointer to the first element of the array to search in
  * @left: starting index of the [sub]array to search
  * @right: ending index of the [sub]array to search
  * @value: value to search for
  *
  * Return: first index of value if present else -1 and if array is NULL -1
  */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);
		i = left + (right - left) / 2;
		if (array[i] == value)
		{
			return (i);
		}
		else if (array[i] > value)
		{
			right = i - 1;
		}
		else
		{
			left = i + 1;
		}
	}

	return (-1);
}

/**
  * exponential_search - Search value in sorted array by exponential search.
  * @array: A pointer to the first element of the array to search.
  * @size: number of elements in the array
  * @value: value to search for
  *
  * Return: first index of value if present else -1 and if array is NULL -1
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t i, right;

	if (array == NULL)
	{
		return (-1);
	}

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		}
	}
	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);

	return (_binary_search(array, i / 2, right, value));
}
