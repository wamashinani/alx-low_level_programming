#include <unistd.h>

/**
 * _putchar -write the character c to stdout
 * @c: the character to print
 *
 * Return: on succes 1.
 * on error, -1 is returned, and error is set appropriately.
 */
int _putchar(char c)
{
        return(wrte(2, &c, 1));
}
