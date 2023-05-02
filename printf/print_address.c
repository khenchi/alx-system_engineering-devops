#include "main.h"

/**
 * print_address - prints address of input in hexa format
 * Return: number of char printed
 */
int print_address(va_list l, flags_t *f)
{
	char *str = num_to_string(va_arg(l, unsigned long int), 16, 1);

	if (!str)
		return (-1);

	if (f->minus)
	{
		_puts("0x");
		_puts(str);
		_pad(' ', f->width - 2 - _strlen(str));
	}
	else
	{
		_pad(f->zero ? '0' : ' ', f->width - 2 - _strlen(str));
		_puts("0x");
		_puts(str);
	}

	return (2 + _strlen(str) + (f->width - _strlen(str) - 2 > 0 ? f->width - _strlen(str) - 2 : 0));
}
