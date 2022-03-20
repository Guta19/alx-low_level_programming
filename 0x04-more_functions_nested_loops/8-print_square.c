#include "main.h"
/**
 *  * print_square -print symbol in square
 *   * @size: number of symbol to be printed
 *    *
 *     * Description: print given number of symbols n times
 */
void print_square(int size)
{
	int i;
	int j;
	
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
