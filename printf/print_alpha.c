#include "main.h"

/**
 * print_string - loops through a string and prints
 * every character
 * Return: number of char printed
 */
int print_string(va_list l, flags_t *f)
{
	char *s = va_arg(l, char *);

	if (!s)
		s = "(null)";

	(void)f;
	return (_puts(s));
}

/**
 * print_char - prints a character
 * Return: number of char printed
 */
int print_char(va_list l, flags_t *f)
{
	return (_writechar(va_arg(l, int)), (void)f, 1);
}
