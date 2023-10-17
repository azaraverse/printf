#include "main.h"

/**
 * printRev - a function that prints a string in reverse.
 * @str: variable argument list containing the string.
 *
 * Return: number of characters printed.
 */

int printRev(va_list str)
{
	char *s = va_arg(str, char *);
	int i, len = 0;

	if (s == NULL)
		s = "(null)";

	i = _strlen(s) - 1;
	while (i >= 0)
	{
		len += _putchar(s[i]);
		i--;
	}
	return (len);
}
