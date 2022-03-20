#include "main.h"
/**
 *  * _isupper -checks for case of a char
 *   * @c: input char to be tested
 *    *
 *     * Description: checks for case of char and return 1 if upper else 0
 *      *
 *       * Return: 1 if upper elese 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
