#include "main.h"
#include <stdlib.h>
/**
 *  * str_concat -concatenate two strings
 *   * @s1: first string
 *    * @s2: second string
 *     *
 *      * Description: concatenate two strings
 *       *
 *        * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2;
	char *con;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	len1 = i;
	i = 0;
	while (s2[i] != '\0')
		i++;
	len2 = i;
	con = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	i = 0;
	if (con == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		con[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		con[i + j] = s2[j];
		j++;
	}
	con[i + j] = '\0';

	return (con);
}
