#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_name - prints a name.
 * @name: input name.
 * @f: function pointer.
 *
 * Return: no return.
 */
int sum_them_all(const unsigned int n, ...)
{
        int sum = 0;
        unsigned int i;
        va_list vaist;

        va_start(valist, n);
        for (i = 0; i < n; i++)
                 sum += va_arg(valist, int);
        va_end(valist);
        return (sum);
}
