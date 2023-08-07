#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * and initializes it with a specific char
 * @size: the size of the array
 * @c: the char to initialize the array with
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;
if (size == 0) /* check if size is valid */
return (NULL);
array = malloc(size * sizeof(char)); /* allocate memory for the array */
if (array == NULL) /* check if allocation succeeded */
return (NULL);

for (i = 0; i < size; i++) /* loop through the array and initialize it with c*/
array[i] = c;

return (array); /* return the pointer to the array */
}
