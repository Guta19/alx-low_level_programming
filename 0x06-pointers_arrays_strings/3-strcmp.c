#include "main.h"
/**
 *  * _strcmp -compare two strings
 *   * @s1: first string
 *    * @s2: second str
 *     *
 *      * Description: compare two str
 *       *
 *        * Return: 1 if eqaul else 0
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; i++)
	{
		if (s1[i] == '\0')
			return (0);
	}

	return (s1[i] - s2[i]);
}
