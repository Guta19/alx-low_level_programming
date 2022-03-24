#include "main.h"
/**
 *  * leet -encode to 1337
 *   * @s: string input
 *    *
 *     * Description: encode string in to 1337
 *      *
 *       * Return: encoded string
 */
char *leet(char *s)
{
	char *cp = s;

	while (*s != '\0')
	{
		if (*s == 'a' || *s == 'A')
			*s = '4';
		else if (*s == 'e' || *s == 'E')
			*s = '3';
		else if (*s == 'o' || *s == 'O')
			*s = '0';
		else if (*s == 't' || *s == 'T')
			*s = '7';
		else if (*s == 'l' || *s == 'L')
			*s = '1';
		s++;
	}

	return (cp);
}
