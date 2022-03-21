#include "main.h"
/**
 *  * asci -convert to asci number
 *   * @n: input digit
 *    *
 *     * Description: convert the digit to its asci code
 *      *
 *       * Return: the digits asci code
 */
int asci(int n)
{
	switch (n)
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
			return (0);
	}
}
/**
 *  * more_numbers -prin 10x a number
 *   * Description: print multiple of 10 from 0 -14
 */
void more_numbers(void)
{
	int i;
	int k;

	for (k = 0; k <= 9; k++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar(asci(i / 10));
			}
			_putchar(asci(i % 10));
		}
		_putchar('\n');
	}
}



