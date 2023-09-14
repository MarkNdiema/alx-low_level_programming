#include "main.h"
/**
 * print_alphabet - Entry point
 *  print_alphabet_x10 - function that prints
 * Return:0
 */
void print_alphabet_x10(void)
{
char i;
int j;
for (j = 0 ; j <= 10; j++)
{
for (i = 'a'; i <= 'z'; i++)
_putchar(j);
_putchar('\n');
}
}
