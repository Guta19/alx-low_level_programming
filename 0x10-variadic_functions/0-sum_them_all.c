#include "variadic_functions.h"
#include <stdarg.h>
/**
 *  * sum_them_all -sum all var args
 *   * @n: arg count
 *    *
 *     * Description: sum all args
 *      *
 *       * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum, x;

	if (n <= 0)
		return (0);
	va_start(args, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		sum = sum + x;
	}

	return (sum);
}
