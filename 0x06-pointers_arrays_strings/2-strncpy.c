#include "main.h"
/**
 *  * _strncpy -copy n char from src to dest string
 *   * @dest: destination str
 *    * @src: source string
 *     * @n: number of char to copy
 *      *
 *       * Description: copy n char from src to dest string
 *        *
 *         * Return: pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
