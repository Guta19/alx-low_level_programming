#include "function_pointers.h"
/**
 *  * int_index - search for an integer
 *   * @array: array of int input
 *    * @size: size of array
 *     * @cmp: compare function
 *      *
 *       * Description: search for integer in array
 *        *
 *         * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
