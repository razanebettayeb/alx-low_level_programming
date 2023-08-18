#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

/**
 * struct printer - struct that contains flags & it's functions.
 *
 * @symbol: the data type flag.
 * @print: the correct function to print the data type.
 *
*/

typedef struct printer
{
char *symbol;
void (*print)(va_list arg);
}
printer_t;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
