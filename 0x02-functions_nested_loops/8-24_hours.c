#include "main.h"
/**
 * *jack_bauer - prints all minutes of the day
 * *@void: first int to add
 **/
void jack_bauer(void)
{
		int hours;

		int min;

		for (hours = 0; hours < 24; hours++)
		{
			for (min = 0; min < 60; min++)
			{
				_putchar((hours / 10) + '0');
				_putchar((hours % 10) + '0');
				_putchar(':');
				_putchar((min / 10) + '0');
				_putchar((min % 10) + '0');
				_putchar('\n');
																		}
		}
}
