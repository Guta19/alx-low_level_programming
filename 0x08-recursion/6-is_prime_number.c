#include "main.h"
/**
 *  * divr -divide by n
 *   * @n: num input
 *    * @i: divisor
 *     *
 *      * Description: check prime
 *       *
 *        * Return: divisors
 */
int divr(int n, int i)
{
	int ii;

	ii = i;
	if (ii > n / 2)
		return (1);
	if (n % ii == 0)
		return (0);
	return (divr(n, ii + 1));
}
/**
 *  * is_prime_number -check if num is prime
 *   * @n: input num
 *    *
 *     * Description: return if num is prime or not
 *      *
 *       * Return: 1 if prime else 0
 */
int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (divr(n, 2));
}
