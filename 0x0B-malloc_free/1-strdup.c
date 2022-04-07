#include "main.h"
#include <stdlib.h>
/**
 *  * _strdup - function that duplicate string
 *   * @str: string to be duplicated
 *    *
 *     * Description: function duplicating a string
 *      *
 *       * Return: pointer to duplicate
 */
char *_strdup(char *str)
{
	int i, len;
	char *dup;

	i = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	len = i;
	dup = (char *)malloc(sizeof(char) * len + 1);
	if (dup == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';

	return (dup);
}
