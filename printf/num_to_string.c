#include "main.h"

/**
 * num_to_string - converts number and base into string
 * Return: result string
 */
char *num_to_string(unsigned long int num, int base, int lowercase)
{
	static char *rep;
	static char buffer[50];
	char *ptr;

	rep = (lowercase)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';
	do {
		*--ptr = rep[num & (base - 1)];
		num >>= (num & (base - 1) != 0) * (base == 2 ? 1 : (base == 8 ? 3 : 4));
	} while (num != 0);

	return (ptr);
}
