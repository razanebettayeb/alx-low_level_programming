#include "function_pointers.h"

/**
 * int_index - searches for an integer using a given comparison function
 * @array: the array to search in
 * @size: the size of the array
 * @cmp: the pointer to the comparison function
 *
 * Return: the index of the first matching element, or -1 if none or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array && cmp && size > 0)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}
}
return (-1);
}
