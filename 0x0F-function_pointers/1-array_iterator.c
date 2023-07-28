#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array elem on new line
 * @array: pointer to the array of integers
 * @size: The number of elements in the array
 * @action: pointer to print in regular or box
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
