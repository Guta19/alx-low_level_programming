#include "main.h"
/**
 *  * _strlen_recursion -get length with recursion
 *   * @s: string input
 *    *
 *     * Description: return length of string
 *      *
 *       * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
