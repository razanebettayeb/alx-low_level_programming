#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: the number of bytes to allocate
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *p;

p = malloc(b); /* allocate memory */
if (p == NULL) /* check if allocation failed */
{
exit(98); /* terminate process with status 98 */
}
return (p); /* return pointer to memory */
}
