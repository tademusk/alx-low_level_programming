#include "main.h"

/**
* _strncmp - compares two strings
*@s1: string
*@s2: string
*Return: comp
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