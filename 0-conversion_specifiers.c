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

/**
 * print_int - function that prints an int.
 * @integer: list of int arguments to iterate.
 *
 * Return: int count.
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
	int i, count = 0;
	int *array;
	unsigned int n = va_arg(bin, unsigned int);
	unsigned int temp = n;

	while (temp / 2 != 0)
	{
		temp = temp / 2;
		count++;
	}
	count++;

	array = malloc(sizeof(int) * count);
	if (array == NULL)
	{
		free(array);
		return (0);
	}
	for (i = 0; i < count; i++)
	{
		array[i] = n % 2;
		n = n / 2;
	}
	for (i = count - 1; i >= 0; i--)
		_putchar(array[i] + '0');
	free(array);
	return (count);
}
