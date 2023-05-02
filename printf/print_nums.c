#include "main.h"

/**
 * print_int - prints an integer
 * Return: number of characters printed
 */
int print_int(va_list l, flags_t *f)
{
	int n = va_arg(l, int);
	int res = count_digits(n);

	if (f->space == 1 && f->plus == 0 && n >= 0)
		res += _writechar(' ');
	if (f->plus == 1 && n >= 0)
		res += _writechar('+');
	if (n <= 0)
		res++;
	print_number(n);
	return (res);
}

/**
 * print_unsigned - prints an unsigned integer
 * Return: number of characters printed
 */
int print_unsigned(va_list l, flags_t *f)
{
	unsigned int u = va_arg(l, unsigned int);
	char *str = num_to_string(u, 10, 0);

	(void)f;
	return (_puts(str));
}

/**
 * print_number - helper function that recursively
 * prints all digits in an integer
 */
void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		_writechar('-');
		n1 = -n;
	}
	else
		n1 = n;

	if (n1 / 10)
		print_number(n1 / 10);
	_writechar((n1 % 10) + '0');
}

/**
 * count_digits - returns the number of digits in an integer
 * Return: number of digits
 */
int count_digits(int i)
{
	if (i == 0)
		return (1);
	else if (i < 0)
		return (count_digits(-i));
	else
		return (log10(i) + 1);
}
