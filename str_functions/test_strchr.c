#include "str_func.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello %d";
    char *f;

    f = _strchr(s, '%');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    return (0);
}