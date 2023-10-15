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
