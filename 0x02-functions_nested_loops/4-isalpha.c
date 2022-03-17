#include "main.h"
/**
 *  * _isalpha -check char for alpha
 *   * @c: input char
 *    *
 *     * Description: check if input is letter
 *      *
 *       * Return: 1 if letter else 0
 */
int _isalpha(int c)
{
	if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
		return (1);
	else
		return (0);
}
