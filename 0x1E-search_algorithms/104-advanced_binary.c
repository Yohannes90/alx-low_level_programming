#include "search_algos.h"

/**
  * advanced_binary_recursive - Search value in sorted array by binary search
  * @array: pointer to the first element of the sub array to search in
  * @left: starting index of the [sub]array to search
  * @right: ending index of the [sub]array to search
  * @value: value to search for
  *
  * Return: first index of value if present else -1 and if array is NULL -1
  */

int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
	{
		return (-1);
	}
	printf("Searching in array: ");
	for (i = left; i < right; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[i]);
	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
	{
		return (i);
	}
	if (array[i] >= value)
	{
		return (advanced_binary_recursive(array, left, i, value));
	}

	return (advanced_binary_recursive(array, i + 1, right, value));
}

/**
 * advanced_binary - Search value in sorted array by binary search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index of value if present else -1 and if array is NULL -1
*/
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
	{
		return (-1);
	}

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
