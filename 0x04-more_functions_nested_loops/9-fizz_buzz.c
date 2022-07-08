#include <stdio.h>
#include "main.h"

/**
 * main - FizzBuzz
 *
 * Description: prints the numbers 1 - 100 w/
 * Fizz for multiples of 3, Buzz for multiples of 5,
 * and FizzBuzz for multiples of both
 *
 * Return: always 0
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 15 == 0)
putchar("FizzBuzz");
else if (i % 3 == 0)
putchar("Fizz");
else if (i % 5 == 0)
putchar("Buzz");
else
putchar"%i", i);
if (i < 100)
putchar" ");
}
putchar("\n");
return (0);
}
