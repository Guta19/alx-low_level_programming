#include "main.h"
/**
 *  * _memset - fills memory with constant byte
 *   * @s: buffer memory
 *    * @b: byte to fill
 *     * @n: numnber of bytes to fill
 *      *
 *       * Description: function to fill up memory buffer
 *        *
 *         * Return: pointer to buffer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
