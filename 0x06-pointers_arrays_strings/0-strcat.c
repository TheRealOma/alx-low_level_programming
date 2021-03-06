#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strcat - function to concatenate two strings
 *
 * @dest: destination
 * @src: string to be appended
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int n = 0;

	while (dest[n] != '\0')
		n++;

	for (i = 0; src[i] != '\0'; i++)
		dest[n + i] = src[i];

	return (dest);
}
