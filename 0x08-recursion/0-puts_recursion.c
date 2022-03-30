#include "main.h"
/**
 *  * _puts_recursion -print using recurssion
 *   * @s: string s
 *    *
 *     * Description: print string with recursion
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion((s + 1));
	}
}
