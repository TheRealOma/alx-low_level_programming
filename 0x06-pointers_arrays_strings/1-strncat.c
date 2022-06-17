#include "main.h"
#include <string.h>

/**
 * _strncpy - concatenate string of n length
 * 
 * @dest: destination file
 * @src: source to be appended
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i=0; i < n && src[i] != '\0'; i ++)
		dest[n + i] = src[i];
	dest[n+i] = '\0';

	return dest;
}
