#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elemnts of the array integers.
 * @a: pointer to array.
 * @n: number of array elements.
 *
 * Return: void
 */
void print_aray(int *a, int *n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i != n - 1)
{
printf(",");
printf(" ");
}
}
printf('\n');
}
