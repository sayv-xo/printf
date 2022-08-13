#ifndef _HEADER_
#define _HEADER_
#include <stdarg.h>

/**
 * struct spc - Struct dir
 *
 * @spc: the specifier
 * @f: the associated function
*/

typedef struct spc
{
	char *spc;
	int (*f)(va_list fmt);
} spc_f;

int _putchar(char c);
int _format(const char *format, va_list fmt);
int c_spec(va_list fmt);
int s_spec(va_list fmt);
int d_spec(va_list fmt);
int is_spec(char c);
int b_spec(va_list fmt);
int _printf(const char *format, ...);
void binary(int n);

#endif
