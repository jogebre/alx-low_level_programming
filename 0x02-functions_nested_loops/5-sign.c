#include "main.h"
/**
 * print_sign- returns the sign of inputed number
 * @n:the value of numbet tobe checked
 * Return: returns 1 if n is positive 0 for zero and -1 for negative value
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
