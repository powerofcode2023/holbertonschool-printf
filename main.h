#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format,...);
int _putchar(char c);
int print_char(va_list args);
int print_string(va_list args);
#endif
