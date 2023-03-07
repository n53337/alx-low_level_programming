#include "main.h"

/**
 * _memset -> function that fills memory with a constant byte
 * @b: character
 * @s: pointer to string
 * @n: number of bytes to be filled in the memory area
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
