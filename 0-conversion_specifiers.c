#include "main.h"

/**
 * print_char - a function that prints a char.
 * @ch: list of char arguments to iterate.
 *
 * Return: number of chars to be printed.
 */

int print_char(va_list ch)
{
	return (_putchar(va_arg(ch, int)));
}

/**
 * print_str - a function that prints a string.
 * @str: list of string arguments to iterate.
 *
 * Return: string count.
 */

int print_str(va_list str)
{
	int len;
	char *s;

	s = va_arg(str, char *);
	if (s == NULL)
		s = "(null)";

	len = 0;
	while (s[len] != '\0')
		len += _putchar(s[len]);

	return (len);
}
