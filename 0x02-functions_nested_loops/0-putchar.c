#include "main.h"
/**
 *  * main -entry point
 *   * Description: print string
 *    *
 *     * Return: 0 always
 */
int main(void)

{
	char *s = "_putchar";
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
	return (0);
}
