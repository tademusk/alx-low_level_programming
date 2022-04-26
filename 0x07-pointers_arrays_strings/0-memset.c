#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: any string
 * @b: byte
 * @n: size of string to fill
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p = b;
		p++;
		n--;
	}
	return (s);
}

