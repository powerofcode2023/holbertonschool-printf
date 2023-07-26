#include "main.h"

int (*get_functions(char *format))(va_list)
{
    int i = 0;


    spec array[]=
    {
        {"c", print_char},
        {"s", print_string},
        {"%", print_percentage},
	{"d", print_d},
	{"i", print_d},
        {"NULL", NULL},
    };
    while(array[i].p)
    {
        if (*format  == array[i].p[0])
        return (array[i].f);
        i++;
    }
    return (NULL);
}
