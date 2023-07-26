#include "main.h"

/**
 * print_char -print a character
 * @args: argument
 *
 * Return: 1 is the length of the character
 */

int print_char(va_list args)
{
	char c = va_arg(args, int);
	_putchar(c);
	return (1);
}
