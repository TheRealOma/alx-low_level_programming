#include <stdio.h>

/**
 * main - check the code
 *
 * Results: same as always
 */

int main(void)
{
	int a;
	int b;

	printf("Enter two values:");
	scanf("%d%d", &b, &a);
	/**a = a + b;
	b = a - b;
	a = a - b;*/
	printf("%d, %d", a, b);
	return(0);
}
