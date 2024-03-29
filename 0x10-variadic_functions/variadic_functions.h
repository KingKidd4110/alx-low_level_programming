#ifndef _VARIADRIC_FUNCTIONS_H_
#define _VARIADRIC_FUNCTIONS_H_

#include <stdio.h>
#include <stdarg.h>

/**
 * struct print - struct print
 * @t: type
 * @f: function
 *
 */
typedef struct print
{
	char *t;
	void (*f)(va_list);
} print_t;

int _putchar(char c);

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

#endif
