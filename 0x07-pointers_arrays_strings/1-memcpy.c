#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory to be filled
 * @src: memory to be copied
 * @n: size of bytes to be copied
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}

