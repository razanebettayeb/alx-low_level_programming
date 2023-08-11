#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements in the array
 * @size: size of each element in bytes
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *array;
char *filler;
unsigned int i;

/* check for zero inputs */
if (nmemb == 0 || size == 0)
return (NULL);

/* allocate memory for the array */
array = malloc(nmemb * size);
if (array == NULL)
return (NULL);

/* set the memory to zero */
filler = array;
for (i = 0; i < (nmemb * size); i++)
filler[i] = 0;

return (array);
}
