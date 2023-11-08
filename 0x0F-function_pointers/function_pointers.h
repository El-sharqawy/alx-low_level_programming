#ifndef __FUNCTION_POINTERS_H__
#define __FUNCTION_POINTERS_H__

#include <stdlib.h>

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif /* __FUNCTION_POINTERS_H__ */
