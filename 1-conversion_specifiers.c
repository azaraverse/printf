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
	int i, numDigits = 0;
	int *array;
	unsigned int n = va_arg(ui, unsigned int);
	unsigned int temp = n;

	/* calculate the number of octal digits required */
	while (n / 8 != 0)
	{
		n /= 8;
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
		array[i] = temp % 8;
		temp /= 8;
	}
	for (i = numDigits - 1; i >= 0; i--)
	        _putchar(array[i] + '0');
	free(array);
	return (numDigits);
}

/**
 * printHex_l - a function that prints a hexadecimal number in lowercase.
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
	int numDigits = 0;
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
	{
		free(buffer);
		return (-1);
	}
	buffer[i] = '\0';
	while (i > 0)
	{
		i--;
		buffer[i] = hex_digits[num % 16];
		num /= 16;
	}
	_puts(buffer);
	numDigits += _strlen(buffer);
	free(buffer);
	return (numDigits);
}

/**
 * printHex_u - a function that prints a hexadecimal number in uppercase.
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
	int numDigits = 0;
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
	{
		free(buffer);
		return (-1);
	}
	buffer[i] = '\0';
	while (i > 0)
	{
		i--;
		buffer[i] = hex_digits[num % 16];
		num /= 16;
	}
	_puts(buffer);
	numDigits += _strlen(buffer);
	free(buffer);
	return (numDigits);
}

/**
 * printStr - a function that handles the 'S' format specifier.
 * @s: list of string arguments to iterate.
 *
 * Return: number of chars to be printed.
 */

int printStr(va_list string)
{
	char hex[5], *s = va_arg(string, char *);
	int i, numDigits = 0;

	if (s == NULL)
		s = "(null)";

	for (i = 0; s[i]; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			/* this handles the non-printable char */
			hex[0] = '\\';
			hex[1] = 'x';
			hex[2] = "0123456789ABCDEF"[s[i] / 16];
			hex[3] = "0123456789ABCDEF"[s[i] % 16];
			hex[4] = '\0';
			write(1, hex, 4);
			numDigits += 4;
		}
		else
		{
			write(1, &s[i], 1);
			numDigits++;
		}
	}
	return (numDigits);
}

/**
 * printPtr - a function that prints a memory address in hexadecimal format.
 * @ptr: pointer to the memory address to be printed.
 *
 * Return: the number of characters printed.
 */

int printPtr(va_list ptr)
{
	unsigned long address = (unsigned long)va_arg(ptr, void *);
	unsigned long temp = address;
	unsigned long base = 16;
	unsigned long digitValue;
	int numDigits = 0;
	int digits = 0;

	if (address == 0)
	{
	        _puts("(nil)");
		_putchar('\0');
		numDigits++;
		return (numDigits);
	}
	numDigits += _putchar('0');
	numDigits += _putchar('x');
	/* calc the number of digits in the address */
	while (temp != 0)
	{
		digits++;
		temp /= base;
	}
	/* print each digit of the address */
	while (digits > 0)
	{
		digitValue = (address >> (4 * (digits - 1))) & 0xF;
		numDigits += printHex(digitValue);
		digits--;
	}
	return (numDigits);
}
