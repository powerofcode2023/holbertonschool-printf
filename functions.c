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
 *
 * Return: 1 is the length of the character, here '%'
 */

int print_percentage(va_list args)
{
	(void)args;
	_putchar('%');

	return (1);
}

/** print_d - print a decimal
 * args: decimal as argument
 *
 * Return: length of the number
 */
int print_d(va_list args)
{
	unsigned int absolute, aux, countnum, count;
	int n;

	int n = va_arg(args, int);
	count = 0;
	
	if (n < 0)
	{
		absolute = (n * -1);
		count += _putchar('-');
	}else
	
		absolute = n;

	aux = absolute;
	countnum = 1;	
	while (aux > 9)
	{
		aux /= 10;
		countnum *= 10;
	}
	while (countnum >= 1)
	{
		count += _putchar((absolute / countnum) %10 + '0');
		countnum /= 10;
	}
	return (count);
}
