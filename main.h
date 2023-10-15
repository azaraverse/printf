#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct fmat - a function that checks for formats.
 * @type: the format to print.
 * @f: the function associated with it.
 */

typedef struct fmat
{
	char *class;
	int (*f)();
} fmat_t;

int _putchar(char c);
int _strlen(char *s);
int print_char(va_list ch);
int print_str(va_list str);
int _printf(const char *format, ...);
int print_int(va_list integer);
int convert_bin(va_list bin);

#endif /* MAIN_H */
