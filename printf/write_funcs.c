#include "main.h"
#include <unistd.h>

/**
 * _writechar - writes the character c to stdout
 * Description:
 */
int _writechar(char c)
{
    static char buf[1024];
    static int i = 0;

    if (i >= 1024)
    {
        write(1, buf, i);
        i = 0;
    }
    if (c != -1)
    {
        buf[i] = c;
        i++;
    }
    return 1;
}

/**
 * _print - prints a string to stdout and returns the number of chars written
 */
int _puts(char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
        _writechar(str[i]);
    return (i);
}
