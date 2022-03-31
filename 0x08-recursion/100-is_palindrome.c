#include "main.h"
#include <stdio.h>
/**
 *  * len -give length of string
 *   * @s: string input
 *    *
 *     * Description: get length
 *      *
 *       * Return: length
 */
int len(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + len(s + 1));
}
/**
 *  * checkpal -check if palindrom
 *   * @s: string input
 *    * @le: length of string
 *     * @i: end offset
 *      *
 *       * Descriotion: offset from end
 *        *
 *         * Return: 1 if palindrome else 0
 */
int checkpal(char *s, int le, int i)
{
/*
 * *  * printf("len = %d\t",le);
*   * printf(" i =%d\t",i);
*    * printf("le / 2 + le %% 2 =%d\t",le /2 + le % 2);
*     * printf("s =%s\t",s);
*      * printf("le -i - 1 =%d \t", le - i - 1);
*       * printf("s[%d] = %c\t",i,s[i]);
*        * printf("s[le - i -1] =%c\n",s[le - i - 1]);
*/
	if (i > (le / 2 + le % 2 - 1))
	{
		return (1);
	}
	if (s[i] != s[le - i - 1])
		return (0);

	return (checkpal(s, le, i + 1));
}
/**
 *  * is_palindrome -check if string is palindrome
 *   * @s: string input
 *    *
 *     * Description: check palindrom string
 *      *
 *       * Return: 1 if palindrome else 0
 */
int is_palindrome(char *s)
{
	if (len(s)  == 0 || len(s) == 1)
	{
		return (1);
	}

	return (checkpal(s, len(s), 0));
}
