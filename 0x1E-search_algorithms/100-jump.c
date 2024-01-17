#include "search_algos.h"

/**
  * jump_search - Searches value in a sorted array of with jump search
  * @array: pointer to the first element of the array to search in
  * @size: number of elements in the array
  * @value: value to search for
  *
  * Return: first index of value if present else -1 and if array is NULL -1
  */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, step;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	step = sqrt(size);
	i = jump = 0;
	while (jump < size && array[jump] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += step;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);
	jump = jump < size - 1 ? jump : size - 1;
	while (i < jump && array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i++;
	}
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
