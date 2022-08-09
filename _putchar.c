#include "main.h"
#include <unistd.h>

/**
 * _putchar - print a char
 * @c: char as argument
 *
 * Return: 0 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
