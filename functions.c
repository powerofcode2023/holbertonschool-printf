#include "main.h"

/**
 * print_char -print a character
 * @args: character as argument
 *
 * Return: 1 is the length of the character
 */

int print_char(va_list args)
{
	char c = va_arg(args, int);
	_putchar(c);
	return (1);
}

/**
 * print_string -print a string
 * @args: string as argument
 *
 * Return: length of the string
 */

int print_string(va_list args)
{
	int i = 0, length = 0;
	char *string;

	string = va_arg(args, char*);
	if (string == NULL)
	{
		string = "(null)";
	}
	while (string[i] != '\0')
	{
		_putchar(string[i]);
		i++;
		length++;
	}
	return (length);
}

/**
 * print_percentage - print a character '%'
 * @args: percentage as argument
 * Return: 1 is the length of the character, here '%'
 */

int print_percentage(va_list args)
{
	(void)args;
	_putchar('%');

	return (1);
}
