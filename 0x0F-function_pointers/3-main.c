#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 *  * main -entry point to program
 *   * @argc: number of arguments
 *    * @argv: argument vector
 *     *
 *      * Description: main function
 *       *
 *        * Return: 0 always
 */
int main(int __attribute__((unused)) argc, char **argv)
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((get_op_func(argv[2]) == NULL) || (argv[2][1] != '\0'))
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && (atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
