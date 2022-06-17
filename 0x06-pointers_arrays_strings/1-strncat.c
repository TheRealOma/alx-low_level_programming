#include "main.h"
#include <string.h>

/**
 * _strncat - concatenate string of n length
 * @dest: destination file
 * @src: source to be appended
 * @n: so its because of n
 *
 * Return: return destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int dest_length = 0;

	while (dest[dest_length] != '\0')
		dest_length++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_length + i] = src[i];

	return (dest);
}
