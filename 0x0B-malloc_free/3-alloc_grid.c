#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *  * alloc_grid -function returning 2D array
 *   * @width: column of array
 *    * @height: row of array
 *     *
 *      * Description: function that return 2D array
 *       *
 *        * Return: pointer to 2D array
 */
int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **DD;

	if (width <= 0 || height <= 0)
		return (NULL);
	DD = (int **)malloc(sizeof(int *) * height);
	if (DD == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		DD[i] = (int *)malloc(sizeof(int) * width);
		if (DD[i] == NULL)
		{
			for (k = 0; k < i ; k++)
				free(DD[k]);
			free(DD);

			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			DD[i][j] = 0;
	return (DD);
}

