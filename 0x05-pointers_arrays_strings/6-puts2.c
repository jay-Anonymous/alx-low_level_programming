#include "holberton.h"

/**
 * puts2 - print alternating chars of string
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
int i;

i = 0;
while (str[i] != '\0')
{
if (i % 2 == 0) /* because: 0-based indexing*/
_putchar(str[i]);
i++;
}
_putchar(10);
}
