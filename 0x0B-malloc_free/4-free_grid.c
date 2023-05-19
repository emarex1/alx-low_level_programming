#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees the memory allocated for a 2-dimensional grid.
 * @grid: The grid to be freed.
 * @height: The height of the grid.
 */
void free_grid(int **grid, int height)
{
    if (grid == NULL)
        return;

    for (int i = 0; i < height; i++)
    {
        if (grid[i] != NULL)
            free(grid[i]);
    }

    free(grid);
}

