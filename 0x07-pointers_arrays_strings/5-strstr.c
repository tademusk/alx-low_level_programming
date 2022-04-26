#include "main.h"

/**
 * _strchr - locates a char in a string
 * @s: any string
 * @c: char to be located
 * Return: s
 */

char *_strchr(char *s, char c)
{
	for (; *s; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (*s != c)
	{
		return (NULL);
	}
	return (s);
}

/**
* _strncmp - compares two strings
* @s1: string
* @s2: string
* @n: any integer length
* Return: comp
*/

int _strncmp(char *s1, char *s2, int n)
{
	int i = 0;
	int comp = 0;

	if (i < n)
	{
		while (s1[i] && s2[i])
		{
			if (s1[i] == s2[i])
			{
				comp = 0;
				i++;
			}
			else
			{
				comp = s1[i] - s2[i];
				break;
			}
		}
	}
	return (comp);
}

/**
 * _strstr - locates a substring
 * @haystack: any string
 * @needle: target substring
 * Return: s
 */

char *_strstr(char *haystack, char *needle)
{
	char *p = haystack;
	int i = 0;

	for (; needle[i]; i++)
	{
	}

	for (; (p = _strchr(p, *needle)) != 0; p++)
	{
		if (*p == '\0' && *needle == '\0')
			return (haystack);
		if (_strncmp(p, needle, i) == 0)
			return ((char *)p);
	}
	return (0);
}

