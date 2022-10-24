#include "holberton.h"

/**
 * _strcpy - copies  src to  dest.
 * @dest:char
 * @src:char
 * Return:char
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
