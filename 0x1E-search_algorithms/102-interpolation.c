#include "search_algos.h"

/**
  * interpolation_search - Search value in sorted array by interpolation search
  * @array: pointer to the first element of the array to search in
  * @size: number of elements in the array
  * @value: value to search for
  *
  * Return: first index of value if present else -1 and if array is NULL -1
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;
	double temp;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	for (low = 0, high = size - 1; high >= low;)
	{
		temp = (double)(high - low) / (array[high] - array[low]);
		pos = low + (temp * (value - array[low]));
		if (pos >= size)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
		{
			return (pos);
		}
		else if (array[pos] > value)
		{
			high = pos - 1;
		}
		else
		{
			low = pos + 1;
		}
	}

	return (-1);
}
