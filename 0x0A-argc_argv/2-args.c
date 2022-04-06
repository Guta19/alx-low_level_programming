#include "main.h"
/**
 *  * print_s -print string
 *   * @s: string to be printed
 *    *
 *     * Description: print string
 */
void print_s(char *s)
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
 *        * Return: 0 always
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		print_s(argv[i]);
	}

	return (0);
}
