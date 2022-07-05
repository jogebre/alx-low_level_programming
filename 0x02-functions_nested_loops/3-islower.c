#include "main.h"
/**
 * _islower-returns 1 if c is lowercase and return 0 if upper case
 * @c: the letter that we will check
 * Return: the returned intiger value whick is 1 or 0
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
