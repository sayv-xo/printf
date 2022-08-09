#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - produces output according to a format.
 *  * @format: pointer to a string
 *  Return: 0 on success
 */

int _printf(const char *format, ...)
{
	int len;
	va_list fmt;

	va_start(fmt, format);
	len = _format(format, fmt);
	va_end(fmt);
	return (len);
}
