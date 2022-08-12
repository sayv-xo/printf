#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * c_spec - fetches a char from va_list
 * @fmt: va_list array
 *
 * Return: an int equivalent to the char on success
 */
int c_spec(va_list fmt)
{
	int s1 = va_arg(fmt, int);

	return (_putchar(s1));
}

/**
 * s_spec - fetches a string from va_list
 * @fmt: va_list array
 *
 * Return: an int equivalent to the chars of string on success
 */
int s_spec(va_list fmt)
{
	char *s = va_arg(fmt, char *);
	int i, length;

	i = 0;
	length = 0;
	if (s != NULL)
	{
		while (s[i])
		{
			length += _putchar(s[i]);
			i++;
		}
		return (length);
	}
	length += _putchar('(');
	length += _putchar('n');
	length += _putchar('u');
	length += _putchar('l');
	length += _putchar('l');
	length += _putchar(')');
	return (length);
}

/**
 * d_spec - fetches an integer from va_list
 * @fmt: va_list array
 *
 * Return: the int on success
 */
int d_spec(va_list fmt)
{
	int num = va_arg(fmt, int);
	int power10;
	int length, placeval, numcpy;

	power10 = 1;
	length = 0;
	if (num != 0)
	{
		if (num < 0)
		{
			length += _putchar('-');
			num = num * (-1);
		}
		numcpy = num;
		while (numcpy / 10 != 0)
		{
			power10 *= 10;
			numcpy = numcpy / 10;
		}
		while (power10 != 0)
		{
			placeval = num / power10;
			if (placeval < 0)
				placeval = -placeval;
			length += _putchar('0' + placeval);
			num = num % power10;
			power10 = power10 / 10;
		}
		return (length);
	}
	length += _putchar('0');
	return (length);
}
