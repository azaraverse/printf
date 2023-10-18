# _printf
This is a custom *_printf* function that produces output according to a format.
It iterates through a list of foramt specifiers and prints the expected outcome
of a selected format specifier to the standard output. If no format specifier is
detected, it prints the rest of the string to the standard output. This _printf
function can not perform the feature rich implementations of the standard C
printf.

## Function Usage:
```c
#include "main.h"

/**
* main - Program Entry Point
*
* Return: Always 0
*/

int main(void)
{
	int i = 20;
	char *s = "I am a human";

	_printf("This function can print %d strings of %s!\n", i, s);
	return (0);
}

```
stdout: This function can print 20 strings of I am a human!

## F&F
The conversion_specifiers.c files contain functions that handle conversion
specifier functions such as *c*, *s*, *i*, *d*, *b*, *u*, *o*, *x*, *X*, *S*,
*p*, *r*, and *R*. There are no functions that handle *flag characters*, *length
modifiers*, *field width*, *precision*, etc. that handle non-custom conversion
specifiers.

* print_char();
This function handles the 'c' format specifier and prints a single char to
stdout.

* print_str();
This function handles the 's' format specifier and prints a string to the stdout

* print_int();
This function handles the 'd' and 'i' format specifiers and prints an int to the
stdout.

* convert_bin();
This function converts an unsigned int argument to binary. This is a custom
conversion specifier.

* unsigned_int();
This function prints an unsigned int value to the standard output.

* u_octal();
This function converts an unsigned int argument to unsigned octal and returns an
unsigned octal value.

* printHex_l();
This function prints a hexadecimal number to the std output in lowercase.

* printHex_u();
This function prints a hexadecimal number to the stdout of a console in
uppercase.

* printStr();
This functions handles the custom 'S' format specifier and string to the console
with non-printable characters represented as \x, followed by the ASCII code
value in hexadecimal (upper case - always 2 characters).

* printPtr();
This function prints a memory address in hexadecimal format.

* printRev();
This function prints a string passed as an argument in reverse.

* printRot13();
This function prints a character in a str with the 13th alphabet from the
character, to mimmick an encryption-Rot13'ed.

```c
/* authored by Yushahu Yussif Azara */
```
