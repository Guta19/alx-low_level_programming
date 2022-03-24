#include "main.h"
/**
 *  * reverse_array -reverse order of elements of arry
 *   * @a: array
 *    * @n: elements of array
 *     *
 *      * Description: this function reverse elements of array
 */
void reverse_array(int *a, int n)
{
	int i, j;
	int tmp;

	j = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		j--;
	}
}
