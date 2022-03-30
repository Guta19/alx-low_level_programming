#include "main.h"
/**
 *  * _strspn -get length of prefix substring
 *   * @s: string input
 *    * @accept: char to find
 *     *
 *      * Description: get length of string initail segment
 *       *
 *        *  Return: length of initail segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int max;
	unsigned int i;
	unsigned int j;

	max = 0;
	i = 0;
	j = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				max++;
				break;
			}
			else if (accept[j + 1] == '\0')
			{
				return (max);
			}
			j++;
		}
		i++;
		j = 0;
	}

	return (max);
}
