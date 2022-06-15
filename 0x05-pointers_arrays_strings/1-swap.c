#include <stdio.h>

/**
 * @a: first variable
 * @b: second variable
 * swap_int: my function name
 * random_variable: my random variable
 *
 * Results: same as always
 */

void swap_int(int *a, int *b)
{
	int random_variable;
	/**my variable name*/
	random_variable = *a;
	/** Assigning a random variable to a*/
	*a = *b;
	*b = random_variable;

}
