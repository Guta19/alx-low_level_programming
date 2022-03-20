#include "main.h"
/**
 *  * _isdigit -checks if char is a digit
 *   * @c: input char
 *    *
 *     * Description: checks for input and return 1 if digit else 0
 *      *
 *       * Return: 1 if digit else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
