#include "main.h"

/** _put_recursion - prints's a string followed bty new line
 *
 * Return: void
 * */
void _print_rev_recursion(char *s);
{
         if (*s != '\0')
	 {
		_print_rev_recursion(s + 1);
		_putchar(*s);
	 }	

}
