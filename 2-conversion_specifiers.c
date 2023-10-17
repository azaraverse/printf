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

/**
 * printRot13 - a function that prints a char in a str with the 13th alphabet
 * from the char, to mimick an encryption.
 * @rot13: variable argument list containing string to consider.
 *
 * Return: encypted string.
 */

int printRot13(va_list rot13)
{
	int alpha, numDigits;
	char *s;

	alpha = numDigits = 0;
	s = va_arg(rot13, char *);

	if (s == NULL)
		return (-1);
	while (s[alpha] != '\0')
	{
		if ((s[alpha] >= 'a' && s[alpha] <= 'z') || (s[alpha] >= 'A' &&
							     s[alpha] <= 'Z'))
		{
			if ((s[alpha] >= 'n' && s[alpha] <= 'z') ||
			    (s[alpha] >= 'N' && s[alpha] <= 'Z'))
				numDigits += _putchar(s[alpha] - 13);
			else
				numDigits += _putchar(s[alpha] + 13);
		}
		else
			numDigits += _putchar(s[alpha]);
		alpha++;
	}
	return (numDigits);
}
