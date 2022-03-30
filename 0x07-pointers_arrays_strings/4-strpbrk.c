#include "main.h"
#include <stdio.h>

/**
 *  * _strpbrk - Searches a string for any of a set of bytes.
 *   * @s: The string to be searched.
 *    * @accept: The set of bytes to be searched for.
 *     *
 *      * Return: If a set is matched - a pointer to the matched byte.
 *       *         If no set is matched - NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	if (*s == '\0')
		return (NULL);
	while (*s != '\0')
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == *s)
				return (s);
		}
		s++;
	}

	return (NULL);
}

