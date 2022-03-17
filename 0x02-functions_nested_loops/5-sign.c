#include "main.h"
/**
 *  **print_sign - print sign of number
 *   *@n: number to be checked
 *    *
 *     **Description : check sig
 *      *Return: 1 if gt 0 , 0 if 0 and  -1 id
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');	
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
