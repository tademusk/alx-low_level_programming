#include "main.h"

/**
 * _strspn - gets length of a prefix substring
 * @s: any string
 * @accept: prefix substring
 * Return: length
 */

unsigned int _strspn(char *s, char *accept)
{
	int c = 0;
	char *p = accept;

	while (*s)
	{
		for (accept = p; *accept; accept++)
		{
			if (*s == *accept)
			{
				c++;
				break;
			}
		}
		if (*accept == '\0')
		{
			break;
		}
		s++;
	}
	return (c);
}

