#include "function_pointers.h"
/**
 *  * print_name -prints name decorated
 *   * @name: name given
 *    * @f: decorator function ponter
 *     *
 *      * Description: print name diffrently based on function input
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
