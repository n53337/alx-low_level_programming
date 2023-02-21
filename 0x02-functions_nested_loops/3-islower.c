#include "main.h"
/**
 * _islower- check if character is lowercase.
 * @c:character checker.
 * Return:0-if lowercase,1-something else.
 */



int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
