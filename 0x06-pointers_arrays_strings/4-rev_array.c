#include "main.h"
/**
 * reverse_array - function to reverse a given array
 * @n: the number of the array elemnts
 * @a: is a pointer to an array of int
 * return: no return value
 */
void reverse_array(int *a, int n)
{
int i;
int container = 0;
for (i = 0; i < n / 2; i++)
{
container = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = container;
}
}
