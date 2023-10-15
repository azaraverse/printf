#include "main.h"

/**
 * u_octal - a function that converts an unsigned int argument to unsigned
 * octal.
 * @ui: list of unsigned int arguments to iterate.
 *
 * Return: an unsigned oct value.
 */

int u_octal(va_list ui)
{
	int i, count = 0;
	int *array;
	unsigned int n = va_arg(ui, unsigned int);
	unsigned int temp = n;

	while (n / 8 != 0)
	{
		n /= 8;
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
		array[i] = temp % 8;
		temp /= 8;
	}
	for (i = count - 1; i >= 0; i--)
		_putchar(array[i] + '0');
	free(array);
	return (count);
}

/**
 * printHex_l - a function that prints a hexadecimal number with low cases.
 * @hex_value: the hexadecimal number to print.
 *
 * Return: the number of characters printed.
 */

int printHex_l(va_list hex_value)
{
	unsigned int num = va_arg(hex_value, unsigned int);
	unsigned int temp = num;
	char hex_digits[] = "0123456789abcdef";
	char *buffer = NULL;
	int count = 0;
	int i = 0;

	if (num == 0)
	{
		_putchar('0');
		return (-1);
	}
	while (temp > 0)
	{
		temp /= 16;
		i++;
	}

	buffer = malloc(sizeof(int) * i + 1);
	if (buffer == NULL)
		return (-1);
	buffer[i] = '\0';
	while (i > 0)
	{
		i--;
		buffer[i] = hex_digits[num % 16];
		num /= 16;
	}
	_puts(buffer);
	count += _strlen(buffer);
	free(buffer);
	return (count);
}

/**
 * printHex_u - a function that prints a hexadecimal number with high cases.
 * @hex_value: the hexadecimal number to print.
 *
 * Return: the number of characters printed.
 */

int printHex_u(va_list hex_value)
{
	unsigned int num = va_arg(hex_value, unsigned int);
	unsigned int temp = num;
	char hex_digits[] = "0123456789ABCDEF";
	char *buffer = NULL;
	int count = 0;
	int i = 0;

	if (num == 0)
	{
		_putchar('0');
		return (-1);
	}
	while (temp > 0)
	{
		temp /= 16;
		i++;
	}

	buffer = malloc(sizeof(int) * i + 1);
	if (buffer == NULL)
		return (-1);
	buffer[i] = '\0';
	while (i > 0)
	{
		i--;
		buffer[i] = hex_digits[num % 16];
		num /= 16;
	}
	_puts(buffer);
	count += _strlen(buffer);
	free(buffer);
	return (count);
}
