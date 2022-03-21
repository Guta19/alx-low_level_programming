#include "main.h"
/**
 *  * print_diagonal - print symbol in diagonal
 *   * @n: number of sybol to be printed
 *    *
 *     * Description: print symbol n times in diagonal
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
