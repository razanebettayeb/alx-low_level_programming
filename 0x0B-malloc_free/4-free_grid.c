#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created by alloc_grid
 * @grid: the grid to free
 * @height: the height of the grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
int i;

if (grid == NULL || height <= 0) /* check if grid is valid */
return;

for (i = 0; i < height; i++)
free(grid[i]); /* free each row */

free(grid); /* free the grid pointer */
}
