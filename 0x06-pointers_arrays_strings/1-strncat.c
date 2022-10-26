#include "holberton.h"
/**
 * _strncat - concatenates two strings
 *
 * @dest: string that is added to
 * @src: string to be appended
 * @n: the number of bytes from @src
 *
 * Return: a pointer to the resulting string @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, co;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (co = 0; co < n; co++)
	{
		dest[i + co] = src[co];
		if (src[co] == '\0')
			co = n;
	}
	return (dest);
}
