#include "main.h"

/**
 * l_modif - a function that handles length modifier 'l' in _printf.
 * @format: the format string.
 * @args: va_list with variable arguments as content.
 *
 * Return: number of characters processed in the format string.
 */

int l_modif(const char *format, va_list args)
{
	long int value;

	while (*format) /* iterate through the format string */
	{
		if (*format == '%')
		{
			format++; /* move past '%' */
			if (*format == 'l' || *format == 'h')
			{
				format++; /* move past 'l' */
				if (*format == 'd' || *format == 'i')
					value = va_arg(args, long int);
				else if (*format == 'x')
			}
		}
	}
}
