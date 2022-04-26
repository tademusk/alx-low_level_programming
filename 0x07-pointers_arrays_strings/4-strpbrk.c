#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: any string
 * @accept: target string
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	char *pa = accept;

	while (*s)
	{
		for (accept = pa; *accept; accept++)
		{
			if (*s == *accept)
				return (s);
		}
		s++;
	}
	return (NULL);
}

