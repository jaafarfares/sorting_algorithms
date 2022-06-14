#include"sort.h"
/**
 * swap - ...
 * @x: ...
 * @y: ....
 */
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
/**
 * partition - .....
 * @array: ....
 * @lo: ....
 * @hi:....
 * @size:.....
 *
 * Return: ....;
 */
size_t partition(int *array, size_t lo, size_t hi, size_t size)
{
	size_t i, j;
	int pivot;

	pivot = array[hi];
	i = lo - 1;
	for (j = lo; j < hi; j++)
	{
		if (array[j] < pivot)
		{
			if (++i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] > array[hi])
	{
		swap(&array[i + 1], &array[hi]);
		print_array(array, size);
	}
	return (i + 1);
}
/**
 * quicksort - ....;
 * @array: ...
 * @lo:....
 * @hi:.....
 * @size: ....
 *
 * Return:....
 */
void quicksort(int *array, int lo, int hi, size_t size)
{
	size_t pivot;

	if (lo < hi)
	{
		pivot = partition(array, lo, hi, size);
		quicksort(array, lo, pivot - 1, size);
		quicksort(array, pivot + 1, hi, size);
	}
}
/**
 * quick_sort - ....
 * in ascending .....
 * @array: ...
 * @size: ...
 * Return:...
*/
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quicksort(array, 0, size - 1, size);
}
