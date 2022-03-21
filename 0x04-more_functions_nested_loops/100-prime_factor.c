#include "main.h"
#include <stdio.h>
/**
 *  * max_prime_factor -fac
 *   * @n: in
 *    *
 *     * Description: dum
 *      *
 *       * Return: 1
 */
long max_prime_factor(long n)
{
	long i;
	long max;

	max = 1;
	for (i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			max = n / i;
			n = n / i;
			i = 2;
		}
	}

	return (max);
}
/**
 *  * main -entry
 *   * Description: dse
 *    *
 *     * Return: 0 always
 */
int main(void)
{
	printf("%lu\n", max_prime_factor(612852475143));
	return (0);
}
