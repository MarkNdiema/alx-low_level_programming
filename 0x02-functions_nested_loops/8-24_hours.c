#include "main.h"

/**
*jack_bauer - prints every minute of the day of Jack Bauer
* @hour, minute: the integer used
* Return: the absolute value of hour and minute
*/
void jack_bauer(void)
{
    int hour, minute;

    for (hour = 0; hour < 24; hour++) {
        for (minute = 0; minute < 60; minute++) {
            _putchar("%02d:%02d\n", hour, minute);
        }
    }
}
