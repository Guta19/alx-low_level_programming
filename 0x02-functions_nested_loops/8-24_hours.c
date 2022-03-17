#include "main.h"
/**
 *  * jack_bauer -print hours and minutes
 *   * Description: print hour and minute
 *    *
 *     * Return: 0 always
 */
void jack_bauer(void)
{
	int i;
	int j;
	int n;
	int m;
	for (i = 48; i <= 50; i++)
	{
		for (j = 48; j <= 57 ; j++)
		{
			for (n = 48; n <= 53; n++)
			{
				for (m = 48; m <= 57; m++)
				{
					if (((i == 50) && (j <= 51)) || (i <= 49))
					{
						_putchar(i);
						_putchar(j);
						_putchar(':');
						_putchar(n);
						_putchar(m);
						_putchar('\n');
					}
				}
			}
		}
	}
}
