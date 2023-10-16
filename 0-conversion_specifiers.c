#include "main.h"

/**
 * print_char - a function that handles the char format specifier.
 * @ch: list of char arguments to iterate.
 *
 * Return: updated count after handling the 'c' format specifier.
 */

int print_char(va_list ch)
{
	char c = va_arg(ch, int);

	return (_putchar(c));
}

/**
 * print_str - a function that handles the string format specifier.
 * @str: list of string arguments to iterate.
 *
 * Return: updated string count.
 */

int print_str(va_list str)
{
	int len;
	char *s = va_arg(str, char *);

	if (s == NULL)
		s = "(null)";

	len = 0;
	while (s[len] != '\0')
		len += _putchar(s[len]);

	return (len);
}

/**
 * print_int - function that handles the 'd' and 'i' format specifiers.
 * @integer: list of int arguments to iterate.
 *
 * Return: updated int count.
 */

int print_int(va_list integer)
{
	int x, y = 1, len = 0;
	unsigned int n;

	x = va_arg(integer, int);
	if (x < 0)
	{
		len += _putchar('-');
		n = x * -1;
	}
	else
		n = x;
	while (n / y > 9)
		y = y * 10;
	while (y != 0)
	{
	        len += _putchar(n / y + '0');
		n %= y;
		y /= 10;
	}
	return (len);
}

/**
 * convert_bin - converts an unsigned int argument to binary.
 * @bin: list of unsigned int arguments to iterate.
 *
 * Return: binary conversion.
 */

int convert_bin(va_list bin)
{
	int i, numDigits = 0;
	int *array;
	unsigned int n = va_arg(bin, unsigned int);
	unsigned int temp = n;

	/* calculate the number of binary digits required */
	while (temp / 2 != 0)
	{
		temp = temp / 2;
		numDigits++;
	}
	numDigits++;

	array = malloc(sizeof(int) * numDigits);
	if (array == NULL)
	{
		free(array);
		return (0);
	}
	for (i = 0; i < numDigits; i++)
	{
		array[i] = n % 2;
		n = n / 2;
	}
	for (i = numDigits - 1; i >= 0; i--)
	        _putchar(array[i] + '0');
	free(array);
	return (numDigits);
}

/**
 * unsigned_int - a function that prints an unsigned int to stdout.
 * @u_value: list of unsigned int arguments to iterate.
 *
 * Return: an unsigned int.
 */

int unsigned_int(va_list u_value)
{
	unsigned int n;
	int x;
	int numDigits = 0;

	n = va_arg(u_value, unsigned int);
	x = 1;

	while (n / x > 9)
		x = x * 10;
	while (x != 0)
	{
	        numDigits += _putchar(n / x + '0');
		n %= x;
		x /= 10;
	}
	return (numDigits);
}
