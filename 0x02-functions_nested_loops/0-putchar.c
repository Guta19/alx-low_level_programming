#include "main.h"
/*
 * * print putchar
 *  * Author: Guta Neme
 */
int main(void)

{
	char *s = "_putchar";
	while(*s !='\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
	return(0);
}
