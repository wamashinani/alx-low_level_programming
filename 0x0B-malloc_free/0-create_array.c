#include "main.h"

/**
* create_array -> creating array
* @size: size of array to be created
* @c: character an array is initialized with
* Return: a pointer to an array
*
*/

char *create_array(unsigned int size, char c)
{
	char *array:
        unsigned int index;
	if(size == o)
		return(NULL);
	array = malloc(sizeof(char) * size);
	if(array == NULL)
		return(NULL);
	for (index = 0; index < size; index++)
		array[index] = c;
	return(array);
}










}
