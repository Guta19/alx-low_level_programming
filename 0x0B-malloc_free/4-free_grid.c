#include "main.h"
#include <stdlib.h>
/**
 *  * free_grid - free memory
 *   * @grid: memory to be freed
 *    * @height: row of address
 *     *
 *      * Description: free memory grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
