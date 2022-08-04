#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - return index place if comparison is true,
 * @array - array
 * @size - size of elements in array 
 * @cmp - pointer to funtion of one of the three in main
 * Return: 0
 */
int int_index(int *array, int size, in (*cmp)(int))
{
int i;
if (array == NULL)
	return (-1);
if (size <= 0)
	return (-1);
if (cmp == NULL)
	return (-1);
for (i = 0, i <= size; i++)
{
if (cmp(array[i] != 0))
	return (i);
}
return (-1);
}
