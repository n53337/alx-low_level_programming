#include "main.h"

/**
 * _memcpy -> function that copies memory area.
 * @dest: pointer to the destination memory block
 * @src: pointer to the source memory block
 * @n: number of bytes from the memory area
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
