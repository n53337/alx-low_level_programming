#include "main.h"

/**
 * _strchr -> function that locates a character in a string
 * @s: pointer to string
 * @c: character
 * Return: first occurrence of the character c in the string s, or NULL.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (0);
}
