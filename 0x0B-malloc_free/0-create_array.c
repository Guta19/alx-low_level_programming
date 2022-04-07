#include "main.h"
#include <stdlib.h>
/**
 *  * create_array -create array
 *   * @c: default value
 *    * @size: size of array in bytes
 *     *
 *      * Description: create array and fill it with default
 *       *
 *        * Return: pointer to new array
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	i =  0;
	p = (char *)malloc(sizeof(char) * size);
	if (p == NULL || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(p + i) = c;
	}

	return (p);
}
