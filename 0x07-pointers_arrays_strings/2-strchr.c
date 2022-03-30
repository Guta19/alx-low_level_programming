#include "main.h"
#include <stdio.h>
/**
 *  * _strchr - locate string
 *   * @s: string input
 *    * @c: searched char
 *     *
 *      * Description: locate char c in string s
 *       *
 *        * Return: c if found else NULL
 */
char *_strchr(char *s, char c)
{
	int i;
	char *n = NULL;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	if ('\0' == c)
	{
		return (&s[i]);
	}

	return (n);
}
