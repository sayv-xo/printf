#ifndef _HEADER_
#define _HEADER_
#include <stdarg.h>

/**
 * struct dir - Struct dir
 *
 * @dir: the specifier
 * @f: the associated function
*/

typedef struct spc
{
	char *spc;
	int (*f)(va_list fmt);
} spc_f;

int _putchar(char c);
int _printf(const char *format, ...);
int _format(const char *format, va_list fmt);
int c_spec(va_list fmt);
int s_spec(va_list fmt);

#endif
