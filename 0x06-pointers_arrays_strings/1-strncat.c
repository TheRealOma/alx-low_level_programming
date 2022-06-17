#include "main.h"
#include <string.h>

/**
 * _strncpy - concatenate string of n length
 * 
 * @dest: destination file
 * @src: source to be appended
 *
 * Return: return destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int dest_length = 0;

	while (dest[dest_length] != '\0')
		dest_length++;

	for (i=0; i < n; i ++)
		dest[n + i] = src[i];

	return dest;
}
