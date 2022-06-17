#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strcat - function to concatenate two strings
 * 
 * @dest: destination
 * @src: string to be appended
 *
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int n;

	for (n = 0; dest[n] != '\0'; n++)

	for (i = 0; src[i] != '\0'; i++)
		dest[n + i] = src[i];

	dest[n + 1] = '\0';

	return (dest);
}
