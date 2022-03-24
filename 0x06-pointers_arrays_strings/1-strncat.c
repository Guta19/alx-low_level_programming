#include "main.h"
/**
 *  * _strncat -concat n char from src to dest
 *   * @dest: destination str
 *    * @src: source str
 *     * @n: number of char to concat
 *      *
 *       * Description: copy n char form src to dest str
 *        *
 *         * Return: dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *cp = dest;
	int i;

	while (*dest != '\0')
	{
		dest++;
	}
	for (i = 0; i < n; i++)
	{
		*(dest++) = src[i];
	}
	*(dest++) = '\0';

	return (cp);
}
