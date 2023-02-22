#include <stdio.h>
#include "main.h"
/**
 * main - code that prints a string
 *
 * Return: always 0
 */
int main(void)
{

char y[] = "_putchar";
int i;

for (i = 0; y[i]; i++)
_putchar(y[i]);
_putchar('\n');

return (0);
}
