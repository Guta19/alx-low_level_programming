#include "main.h"
/**
 *  * _strlen -returns length og string
 *   * @s: address of string
 *    *
 *     * Description: calculate length of string
 *      *
 *       * Return: string length
 */
int _strlen(char *s)
{
	int l;

	l = 0;
	while (*s != '\0')
	{
		l++;
		s++;
	}

	return (l);
}
