#include <stdio.h>
#include <stdlib.h>
#include "pointer.h"
/**
 * int_index - indexes array
 * @array: array to go through
 * @size: size of array
 * @cmp: function to do something with size
 * Return: int value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	while (a < size)
	{
		a++;
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}
