#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: this is the destination
 * @src: this is the copia
 * Return: copy
 */
char *_strcpy(char *dest, char *src)
{
char *start = dest;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (start);
}
