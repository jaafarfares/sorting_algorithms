#include "sort.h"
/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: array of integers
 * @size: size of an array
 * Return: Nothing.
 */

void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0;
	int tmpr, index, minor = 0;

	if (size >= 2)
	{
		for (; i < size; i++)
		{
			minor = array[i];
			for (j = i + 1; j < size; j++)
			{
				if (array[j] < minor)
				{
					minor = array[j];
					index = j;
				}
			}
			if (minor != array[i])
			{
				tmpr = array[i];
				array[i] = minor;
				array[index] = tmpr;
				print_array(array, size);
			}
		}
}
}
