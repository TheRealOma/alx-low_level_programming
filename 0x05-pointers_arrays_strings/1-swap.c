#include <stdio.h>

/**
 * swap_int - my function name
 * @a: first variable
 * @b: second variable
 * random_variable: my random variable
 *
 * Results: swaps two values in variables
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
