#include "main.h"
#include <stdlib.h>

/**
 * create_array - a program that creates a dynamic memory allocation
 * filled with a specific character c .
 * @size : size of an array.
 * @c: character.
 * Return: NULL.
 */

char *create_array(unsigned int size, char c)
{
char *pointer;
unsigned int i;
if (size == 0)
return (NULL);
pointer = malloc(sizeof(char) * size);
/**
* Allocating a specific nb of bytes on the memory
* and returning a pointer to the allocated memory
* return: NULL
*/
if (pointer == NULL)
return (NULL);
else
{
for (i = 0; i < size; i++)
pointer[i] = c;
return (pointer);
}
}
