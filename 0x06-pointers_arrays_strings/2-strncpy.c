#include "main.h"
#include <string.h>

/**
 * _strncpy - copy a string
 * @dest: destination
 * @src: source
 * @n: integer
 *
 * Return: destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
