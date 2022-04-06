#include "main.h"
#include <stdlib.h>
/**
 *  * print_num -print integer
 *   * @n: num to be printed
 *    *
 *     * Description: print  number uisng recursion
 *      */
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
 *      */
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
 *  * is_num -check if char is num
 *   * @c: char to be  checked
 *    *
 *     * Description:check if char is num
 *      *
 *       * Return: 1 if num else 0
 */
int is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/**
 *  * main -entry point
 *   * @argc: number of arguments
 *    * @argv: argument vector
 *     *
 *      * Description: main program
 *       *
 *        * Return: 0 always
 */
int main(int argc, char **argv)
{
	int i;
	int sum;
	char *s;

	sum = 0;
	if (argc < 2)
	{
		prints("0");

		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		s = argv[i];
		while (*s)
		{
			if (!is_num(*s))
			{
				prints("Error");
				return (1);
			}
			s++;
		}
		sum = sum + atoi(argv[i]);
	}

	print_num(sum);
	_putchar('\n');

	return (0);
}
