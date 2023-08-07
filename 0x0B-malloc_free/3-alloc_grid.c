#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: the width of the grid
 * @height: the height of the grid
 * Return: a pointer to the grid, or NULL if it fails
 */
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;
if (width <= 0 || height <= 0) /* check if width or height is valid */
return (NULL);
grid = malloc(height * sizeof(int *)); /* allocate memory for the rows */
if (grid == NULL) /* check if allocation succeeded */
return (NULL);

for (i = 0; i < height; i++)
{
grid[i] = malloc(width * sizeof(int)); /* allocate memory for each column */

if (grid[i] == NULL) /* check if allocation succeeded */
{
while (i >= 0) /* free the previously allocated memory */
{
free(grid[i]);
i--;
}
free(grid); /* free the grid pointer */
return (NULL);
}

for (j = 0; j < width; j++) /* initialize the grid elements to 0 */
grid[i][j] = 0;
}

return (grid); /* return the pointer to the grid */
}
