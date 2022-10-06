#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - Concatenates two strings using at
 *                  most an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 */


void *_calloc(unsigned int size)
{
	void *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc (nmemb * sie);
	if (p == NULL)
	{
		return(NULL)
	}
	for(i = 0; i < (nmemb * size); i++)
	{
		*((char *)(p) + i) = 0;
	 
	}		
 

	return (p);


}
