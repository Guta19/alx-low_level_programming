#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
void _putchar(char s);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
void prints(char *s);
void print_num(int n);
#endif
