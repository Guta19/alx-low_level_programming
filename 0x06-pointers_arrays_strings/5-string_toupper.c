#include "main.h"
/**
 *  * string_toupper -convert to upper case
 *   * @s: the input string array
 *    *
 *     * Description: convert all elements of array to upper case
 *      *
 *       * Return: pointer to the str
 */
char *string_toupper(char *s)
{
	char *cp = s;

	while (*s != '\0')
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s = *s - 32;
		}
		s++;
	}

	return (cp);
}
