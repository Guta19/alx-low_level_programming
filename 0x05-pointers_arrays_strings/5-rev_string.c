#include "main.h"
/**
 *  * len -reurn len
 *   * @s: str input
 *    *
 *     * Description: return len
 *      *
 *       * Return: len
 */
int len(char *s)
{
	int le;

	le = 0;
	while (*s != '\0')
	{
		le++;
		s++;
	}

	return (le++);
}
/**
 *  * rev_string -print string in reverse
 *   * @s: input string
 *    *
 *     * Description: prints string in reverse order
 */
void rev_string(char *s)
{
	int length;
	int i, j;
	char cp[1000];

	length = len(s);

	j = length - 1;
	for (i = 0 ; i < length; i++)
	{
		cp[i] = s[i];

	}
	for (i = 0; i < length; i++)
	{
		s[i] = cp[j];
		j--;
	}

}
