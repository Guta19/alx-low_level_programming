#include "main.h"
#include <stdio.h>
/**
 *  * _strcat -concat two strings
 *   * @dest: destination string
 *    * @src: source string
 *     *
 *      * Description: concatenate string src to end of string destination
 *       *
 *        * Return: pointer to destination string
 */
char *_strcat(char *dest, char *src)
{
	char *cp = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (cp);
}
