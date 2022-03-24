#include "main.h"
/**
 *  * power - gives power of x  to y
 *   * @x: base
 *    * @y: exponent
 *     *
 *      * Description:  calculate x to the power of y
 *       *
 *        * Return: x ^ y
 */

int power(int x, int y)
{
	int i;
	int cp;

	cp = x;
	for (i = 1; i < y; i++)
	{
		x *= cp;
	}

	return (x);
}

/**
 *  * print_number -print any number
 *   * @n: the number to be printed
 *    *
 *     * Description: this function prints any number
 */

void print_number(int n)
{
	int m;
	int i;
	int digits;
	int b;
	int sign;

	sign = 1;
	b = 10;
	digits = 1;
	m = n;
	if (n < 0)
	{
		_putchar('-');
	}
	while ((n / b) != 0)
	{
		digits++;
		n = n / b;
	}
	for (i = digits - 1; i > 0; i--)
	{
		if (m < 0)
		{
			_putchar((-sign) * (m / power(b, i)) + '0');
		}
		else
		{
			_putchar(m / power(b, i) + '0');
		}
		m %= power(b, i);
	}
	if (m < 0)
	{
		_putchar((-sign) * m + '0');
	}
	else
	{
		_putchar(m + '0');
	}
}
