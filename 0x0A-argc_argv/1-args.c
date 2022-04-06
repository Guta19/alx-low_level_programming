#include "main.h"
/**
 *  * print_num -print number
 *   * @n: number to be printed
 *    *
 *     * Description: print using recursion
 */
void print_num(int n)
{
	if (n % 10 == 0 && n / 10 == 0)
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
 *  * main -entry point
 *   * @argc: number of argumnets
 *    * @argv: argumnet vector
 *     *
 *      * Description: main program
 *       *
 *        * Return: 0 always
 */
int main(int argc, char **argv __attribute__((unused)))
{
	if (argc == 1)
		_putchar('0');
	else
		print_num(argc - 1);
	_putchar('\n');

	return (0);
}
