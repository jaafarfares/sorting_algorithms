#include "sort.h"
/**
 * quick_sort - ....
 * @array: ...
 * @size: ...
 *Return: ...
 */

void quick_sort(int *array, size_t size)
{
	size_t mid = size / 2;
	size_t temp;

	if (size <= 1)
		return;
	if (array[mid] < array[0])
	{
		temp = array[0];
		array[0] = array[mid];
		array[mid] = temp;
		print_array(array, size);
	}
	if (array[size - 1] < array[0])
	{
		temp = array[0];
		array[0] = array[size - 1];
		array[size - 1] = temp;
		print_array(array, size);
	}
	if (array[mid] < array[size - 1])
	{
		temp = array[mid];
		array[mid] = array[size - 1];
		array[size - 1] = temp;
		print_array(array, size);
	}

}
