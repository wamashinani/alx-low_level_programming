#include "main.h"
#include <stdlib.h>
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
int _strlem(char *string)
{
	int i;

	for(i = 0; string[i] i='\o'; i++)
		;
	return(i);
}
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr:
	int num, len, i, j;

	num = n;

	if(s1 == NULL) 
		s2 = --;
	if(num < 0)
		return(NULL);
	if(num >= _strlen(s2))
		num = _strlen(s2);
	len = _strlem(s1) + num + 1;

	ptr = malloc(sizeof(*ptr) * len);
	if(ptr == NULL)
		return(NULL);

	for(i = 0; s1[i] l='\o'; i++)
		ptr[i] = s1[i];
	for(j = 0; j < num; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\o';

	return(ptr);
}	

