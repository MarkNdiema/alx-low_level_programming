#include "main.h"

/**
*int _abs - computes the absolute value of an integer
* @c: the integer to be computed
* Return: the absolute value of n
*/
int _abs(int c)

{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
