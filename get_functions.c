#include "main.h"

/**
 * get_functions - look for the specifier
 * @x: variable to the function
 * Return: a pointer to the function
 */
int (*get_functions(char x))(va_list)
{
	int i = 0;

	spec array[] =	{
		{"c", print_char},
		{"s", print_string},
		{"%", print_percentage},
		{"d", print_d},
		{"i", print_d},
		{"NULL", NULL},
	};
	while (array[i].p)
	{
		if (x == array[i].p[0])
			return (array[i].f);
		i++;
	}
	return (NULL);
}
