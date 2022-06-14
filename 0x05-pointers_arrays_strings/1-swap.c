#include <stdio.h>

/**
 * main - check the code
 *
 * Results: same as always
 */

void swap_int(int *a, int *b)
{
	int random_variable;
	/**Add a comment*/
	random_variable = *a;
	/** Assigning a random variable to a*/
	*a = *b;
	*b = random_variable;

}
