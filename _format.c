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
	int j, index;
	int length = 0;
	spc_f spec[] = {
		{"c", c_spec},
		{"s", s_spec},
		{"d", d_spec},
		{"i", d_spec},
	};

	if (format == NULL)
		return (-1);
	for (j = 0; format[j]; j++)
	{
		if (format[j] != '%')
		{
			length += _putchar(format[j]);
		}
		else
		{
			j++;
			if (is_spec(format[j]) >= 0)
			{
				index = 0;
				index += is_spec(format[j]);
				length += spec[index].f(fmt);
			}
			else if (!(format[j]))
				return (-1);
			else if (format[j] == '%')
				length += _putchar(format[j]);
			else
			{
				length += _putchar(format[j - 1]);
				length += _putchar(format[j]);
				if (format[j] == ' ')
					j++;
			}
		}
	}
	return (length);
}

/**
 * is_spec - test if a char is a specifier
 * @c: take a char from the format array
 *
 * Return: 0 or index;
 */
int is_spec(char c)
{
	char arr[] = {'c', 's', 'd', 'i', '\0'};
	int i;

	i = 0;
	while (arr[i])
	{
		if (arr[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

