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

/**
 * b_spec - the unsigned int argument is converted to binary
 * @fmt: va_list array
 *
 * Return: int on success
 */
int b_spec(va_list fmt)
{
	int num = va_arg(fmt, int);
	int len, i, bitnum, p, numcpy;

	p = 2;
	bitnum = 1;
	numcpy = num;
	i = 0;
	len = 0;
	if (num < 0)
		num = num * (-1);
	while (p <= num)
	{
		p *= 2;
		bitnum++;
	}
	if (numcpy < 0)
	{
		while (i < (32 - bitnum))
		{
			_putchar('1');
			i++;
		}
	}
	binary(num);
	len += bitnum;
	if (numcpy < 0)
		return (32);
	return (len); 
}

/**
 * binary - binary converter
 * @n: integer argument
 *
 * Description: write a binaray number into stack
 */
void binary(int n)
{
	if (n > 1)
		binary(n / 2);
	_putchar('0' + (n % 2));
}
