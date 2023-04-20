#include <stdio.h>
#include "pointer.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * array_iterator - iterates through array
 * @array: array to go through
 * @size: size of array
 * @action: action function to take
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		exit(98);
	while (i < size)
	{
		i++;
		action(array[i]);
	}
}
