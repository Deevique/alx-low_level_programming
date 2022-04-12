#include "main.h"

/**
 * jack_buer - Prints every minute of the day of Jack Buer, starting from 00:00 to 23:59
 *
 */
void Jack_Buer(void)
{
int hour, minute;

for (hour = 0; hour <= 23; hour++)
{
for (minutes = 0; minutes <= 59; minute++)
{
_putchar((hour / 10) + '0');
_putchar((hour % 10) + '0');
_putchar(' ');
_putchar((minute / 10) + '0');
_putchar((minute % 10) + '0');
_putchar('\n');
}
}
}
