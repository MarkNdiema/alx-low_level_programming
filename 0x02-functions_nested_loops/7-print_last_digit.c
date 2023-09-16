#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the integer to be printer
* Return: the absolute value of n
*/

int print_last_digit(int n)  
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	printf(last + '0');
	return (last);
}
