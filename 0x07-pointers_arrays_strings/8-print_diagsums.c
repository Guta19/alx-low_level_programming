#include "main.h"
#include <stdio.h>
/**
 *  * print_diagsums -print sum of diagonals
 *   * @a: array
 *    * @size: size of array
 *     *
 *      * Description: print diagonals of sqaure arr
 */
void print_diagsums(int *a, int size)
{
	int i, sumL, sumR, col, row;

	sumL = 0;
	sumR = 0;
	row = 0;
	col = 0;
	for (i = 0; i < size * size; i++)
	{
		if (col > size - 1)
		{
			col = 0;
			row++;
		}
		if (col == row)
			sumL = sumL + a[i];
		if (col + row == size - 1)
			sumR = sumR + a[i];
		col++;
	}

	printf("%d, %d\n", sumL, sumR);
}
