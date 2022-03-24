#include "main.h"
/**
 *  * cap_string -capitalize all words
 *   * @s: string input
 *    *
 *     * Description: this func capitalize all words of a string s
 *      *
 *       * Return: capitalized word
 */
char *cap_string(char *s)
{
	char *cp = s;
	int OUT;
	int dif;

	dif = 32;
	OUT = 1;
	while (*s != '\0')
	{
		if (*s == ',' || *s == ';' || *s == '.' || *s == '!' ||
				*s == '?' || *s == '\"' || *s == '(' || *s == ')' ||
				*s == '{' || *s == '}' || *s == '\n' || *s == '\t' || *s == ' ' ||
				*s == '\v')
			OUT = 1;
		else
			OUT = 0;
		if (OUT == 1)
		{
			if (*(s + 1) >= 'a' && *(s + 1) <= 'z')
				*(s + 1) = *(s + 1) - dif;
		}
		s++;
	}

	return (cp);
}
