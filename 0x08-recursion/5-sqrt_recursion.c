#include "main.h"
#include <stdio.h>
/**
 *  * divr -divide rec
 *   * @n: num input
 *    * @i: divisor
 *     *
 *      * Description: divide rec
 *       *
 *        * Return: factor
 */
int divr(int n, int i)
{
	int ii;

	ii = i;
	if (n == 1)
		return (1);
	if (n % ii == 0 && n % (ii * ii) == 0)
	{
		return (ii * divr(n / (ii * ii), i));
	}
	else if (ii < n / 2)
	{
		return (divr(n, i + 1));
	}
	else
	{
		return (-1);
	}
}
/**
 *  * _sqrt_recursion -get square root wth rec
 *   * @n: input num
 *    *
 *     * Description: return natural square root of anumber
 *      *
 *       * Return: sqrt n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (divr(n, 2));
}
