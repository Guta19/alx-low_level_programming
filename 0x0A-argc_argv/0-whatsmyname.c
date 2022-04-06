#include "main.h"
/**
 *  * main - entry point
 *   * @argc: number of arguments
 *    * @argv: argumnet vector
 *     *
 *      * Description: main program
 *       *
 *        * Return: 0 always
 */
int main(int argc __attribute__((unused)), char **argv)
{
	char *s = argv[0];

	while (*s)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');

	return (0);
}
