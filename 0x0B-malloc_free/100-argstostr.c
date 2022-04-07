#include "main.h"
#include <stdlib.h>
/**
 *  * argstostr -concatenate all arguments of prog
 *   * @ac: arg count
 *    * @av: arg vector
 *     *
 *      * Description: conact args of program
 *       *
 *        * Return: concatenated string of args
 */
char *argstostr(int ac, char **av)
{
	int i, len, j;
	char *args;
	char *cp;

	j = len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		while (av[i][j] != '\0')
		{
			len++;
			j++;
		}
		j = 0;
	}


	args = (char *)malloc(sizeof(char) * (len + ac + 1));
	if (args == NULL)
		return (NULL);
	cp = args;
	for (i = 0; i < ac; i++)
	{
		while (av[i][j] != '\0')
		{
			*(args) = av[i][j];
			j++;
			args++;
		}
		*args = '\n';
		args++;
		j = 0;
	}

	return (cp);
}
