/*
 * File:1-print_rev_recursion.c
 * Author: wamashinani
 */
#include"main.h"
void _print _rev_recursion(char*s)
{
      if (*s)
       { 
             _print_rev_recursion(s+1);
             _putchar(*s);
       }   

}
