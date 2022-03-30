#include "main.h"
/**
 *  * _pow_recursion -return x pow to y
 *   * @x: base
 *    * @y: exp
 *     *
 *      * Description: power with recursion
 *       *
 *        * Return: x raised to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
