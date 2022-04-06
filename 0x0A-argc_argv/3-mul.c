#include "main.h"
#include <stdlib.h>
/**
 *  * print_num -print integer
 *   * @n: num to be printed
 *    *
 *     * Description: print  number uisng recursion
 */
void print_num(int n)
{
	if (n / 10 == 0 && n % 10 == 0)
	{
		return;
	}
	else
	{
		print_num(n / 10);
		_putchar(n % 10 + '0');
	}
}
/**
 *  * prints -print string
 *   * @s: string to be printed
 *    *
 *     * Description: print string
 */
void prints(char *s)
{
	while (*s)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
/**
 *  * main -entry point
 *   * @argc: number of argumnets
 *    * @argv: argumnet vector
 *     *
 *      * Description: main program
 *       *
 *        * Return: 0  always
 */
int main(int argc, char **argv)
{
	int i, m;

	m = 1;
	if (argc != 3)
	{
		prints("Error");

		return (1);
	}
	if (argv[1][0] == '-')

	{
		argv[1][0] = '0';
		m = (-1) * m;
	}
	if (argv[2][0] == '-')
	{
		argv[2][0] = '0';
		m = (-1) * m;
	}
	if (m < 0)
	{
		_putchar('-');
	}
	i = atoi(argv[1]) * atoi(argv[2]);
	print_num(i);
	_putchar('\n');

	return (0);
}
