#include "main.h"

/**
 * _strncmp -> function that compares two strings
 * @s1: pointer to string
 * @s2: pointer to string
 * @j: length of s2
 * Return: n
 */
int _strncmp(char *s1, char *s2, int j)
{
	int i = 0;
	int n = 0;

	while ((s1[i] != '\0' || s2[i] != '\0') && i < j)
	{
		if (s1[i] != s2[i])
		{
			n = (s1[i] - s2[i]);
			break;
		}
		i++;
	}
	return (n);
}

/**
 * _strstr -> function that locates a substring
 * @haystack: pointer to string
 * @needle: pointer to string
 * Return: the beginning of the located substring, or NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	int len = 0;

	while (needle[len] != '\0')
	{
		len++;
	}
	while (*haystack)
	{
		if (_strncmp(haystack, needle, len) == 0)
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
