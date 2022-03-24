#include "main.h"
/**
 *  * rot -return rotated char
 *   * @x: char tested
 *    *
 *     * Description: return rot13 encode char
 *      *
 *       * Return: new char
 */
int rot(int x)
{
	int c;

	c = x;
	if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
	{
		c = c + 13;
	}
	else if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
	{
		c = c - 13;
	}

	return (c);
}

/**
 *  * rot13 -encode using rot13
 *   * @s: string to be encoded
 *    *
 *     * Description: this function encode string  using rot13 method
 *      *
 *       * Return: encoded string
 */
char *rot13(char *s)
{
	char *cp = s;

	while (*s != '\0')
	{
		*s = rot(*s);
		s++;
	}

	return (cp);
}
