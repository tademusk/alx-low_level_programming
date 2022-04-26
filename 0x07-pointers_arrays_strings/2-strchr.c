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

