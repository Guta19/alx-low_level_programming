#include "main.h"
/**
 *  * swap_int - swap two variables
 *   * @a: first number
 *    * @b: second number
 *     *
 *      * Description: swap two input values
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
