#include "main.h"

/**
 * _putchar - writes the character 'c' to stdout.
 * @c: the character to print.
 *
 * Return: 1 on success.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _strlen - returns the length of a string.
 * @s: pointer to the string.
 *
 * Return: length of the string.
 */

int _strlen(char *s)
{
	if (*s != '\0')
		return (1 + _strlen(s + 1));
	else
		return (0);
}

/**
 * _puts - prints a string to stdout.
 * @str: pointer to the string to print.
 *
 * Return: void.
 */

void _puts(char *str)
{
	if (*str == '\0')
		return;
	_putchar(*str);
	_puts(str + 1);
}

/**
 * printHex - a function that prints a single hexadecimal digit.
 * @n: digit to be printed (0 - 15)
 *
 * Return: number of characters printed.
 */

int printHex(int n)
{
	if (n >= 0 && n <= 9)
		return (_putchar('0' + n));
	else
		return (_putchar('a' + (n - 10)));
}
