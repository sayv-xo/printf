#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * _format - format my _printf()
 * @format: pointer to the format  string
 * @fmt: variable list
 * Return: 0 on success
 */
int _format(const char *format, va_list fmt)
{
	int j;
	int length = 0;
	spc_f spec[] = {
		{"c", c_spec},
		{"s", s_spec},
		{NULL, NULL}
	};

	j = 0;
	while (format[j])
	{
		if (format[j] != '%')
		{
			length += _putchar(format[j]);
		}
		else
		{
			j++;
			if (format[j] == 'c')
				length += spec[0].f(fmt);
			else if (format[j] == 's')
				length += spec[1].f(fmt);
			else if (format[j] == '%')
				length += _putchar(format[j]);
		}
		j++;
	}
	return (length);
}
