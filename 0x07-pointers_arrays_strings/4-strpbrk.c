#include "main.h"

/**
 * _strpbrk -> function that searches a string for any of a set of bytes
 * @s: pointer to string
 * @accept: pointer to string
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *res = accept;

		while (*res != '\0')
		{
			if (*s == *res)
			{
				return (s);
			}
			res++;
		}
		s++;
	}
	return (0);
}
