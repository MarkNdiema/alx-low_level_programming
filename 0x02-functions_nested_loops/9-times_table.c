#include "main.h"

/**
*times_table - prints the 9 times table, starting with 0
* @r,c : r rep rows while c rep colums
*/
void times_table(void) 
{
    int r = 10;
    int c = 10;
`
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            _putchar("%2d ", i * c + j);
        }
        _putchar("\n"); // Move to the next row after printing a row
    }

    return 0;
}
