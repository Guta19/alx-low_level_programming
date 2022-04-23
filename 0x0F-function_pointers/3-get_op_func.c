#include "function_pointers.h"
#include "3-calc.h"
#include <stdio.h>
/**
 *  * get_op_func -retunn which operation to be called
 *   * @s: selector char input
 *    *
 *     * Description: operation selector funct
 *      *
 *       * Return: index of call back function
 */
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;
	while (ops[i].op != NULL && (*ops[i].op != *s))
		i++;

	return (ops[i].f);
}
