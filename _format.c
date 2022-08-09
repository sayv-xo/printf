#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * _format - format my _printf()
 * @format: pointer to the format  string
 *
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
			else if (format[j] == ' ')
			       length += _putchar(' ');
			else if (format[j] == '\0')
				break;
			else
			{
				length += _putchar(format[j - 1]);
				length += _putchar(format[j]);
			}
		}
		j++;
	}
	return (length);
}
