#include "main.h"
/**
 *  * print_line -draw straight line in terminal
 *   * @n: number of times char drawn
 *    *
 *     * Description: draw a charactor c in terminal -straight line
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
