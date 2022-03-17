#include "main.h"
/**
 *  *gc -convert asci to num
 *   *@c: input num
 *    *Description: print char
 *     *Return: asci inverse
 */
int gc(int c)
{
	switch (c)
	{
		case 0:
			return (48);
		case 1:
			return (49);
		case 2:
			return (50);
		case 3:
			return (51);
		case 4:
			return (52);
		case 5:
			return (53);
		case 6:
			return (54);
		case 7:
			return (55);
		case 8:
			return (56);
		case 9:
			return (57);
		default:
			return (58);
	}
}
/**
 *  * times_table -print times table
 *   * Description: print times table
 */
void times_table(void)
{
	int i;
	int j;
	int k;
	
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if ((j != 0) && (k < 10))
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if ((j != 0) && (k >= 10))
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
			}
			if (k >= 10)
			{
				_putchar(gc(k / 10));
				_putchar(gc(k % 10));
			}
			else
			{
				_putchar(gc(k));
			}
		}
		_putchar('\n');
	}
}
