# include "main.h"
/**
 * print_sign-check the sign of a number.
 *
 * @n:checker
 * Return:1-greater than 0: 0-equals 0:-1-less than 0
 */



int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
