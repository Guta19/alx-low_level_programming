#include "main.h"
/**
 *  * factorial -return factorial of an num
 *   * @n: input number
 *    *
 *     * Description: return factorial
 *      *
 *       * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
