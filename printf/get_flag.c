#include "main.h"

/**
 * get_flag - turns on flags if _printf finds
 * a flag modifier in the format string
 * Return: 1 if a flag has been turned on, 0 otherwise
 */
int get_flag(char s, flags_t *f)
{
	switch (s)
	{
		case '+': f->plus = 1; return 1;
		case ' ': f->space = 1; return 1;
		case '#': f->hash = 1; return 1;
		default: return 0;
	}
}
