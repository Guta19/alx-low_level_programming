#include "main.h"
/**
 *  * _islower -check foe case
 *   * @c: input letter
 *    * Description: check  case of letter
 *     *
 *      * Return: 1 if lower else 0
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	else
		return (0);
}
