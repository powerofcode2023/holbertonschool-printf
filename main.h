#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct specifier - struct specifier
 * @p: the right character
 * @f: the right function
 */
typedef struct specifier
{
	char *p;
	int (*f)(va_list args);
}spec;

int _printf(const char *format,...);
int _putchar(char c);
int print_char(va_list args);
int print_string(va_list args);
int print_percentage(va_list args);
int print_d(va_list args);
int (*get_functions(char *format))(va_list);

#endif
