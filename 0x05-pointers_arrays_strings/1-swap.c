#include <stdio.h>

/**
 * main - check the code
 *
 * Results: same as always
 */

void swap_int(int *a, int *b) /**This is the function*/
{
	int random_variable = *a; /** Assigning a random variable to a*/
	*a = *b;
	*b = random_variable; /** Now b becomes the random variable*/

}
