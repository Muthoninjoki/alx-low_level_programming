#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array
 * @array: Pointer to the first element
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of value, otherwise -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");
		print_array(array, left, right);

		mid = (left + right) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}

/**
 * print_array - Prints the elements of an array within a given range
 * @array: Pointer to the first element
 * @start: Starting index of the range
 * @end: Ending index of the range
 */

void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i != end)
			printf(", ");
	}
	printf("\n");
}
