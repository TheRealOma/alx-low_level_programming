#include "main.h"
#include <string.h>

/**
 * reverse_array - reverse the array
 * @a: an integer
 * @n: another integer
 *
 * Return: return statement
 */

void reverse_array(int *a, int n)
{
	int h = n / 2;
	int f, r, i;

	n -= 1;

	for (i = 0; i < h; i++)
	{
		f = a[n - i];
		r = a[i];
		a[i] = f;
		a[n - i] = r;
	}
}
