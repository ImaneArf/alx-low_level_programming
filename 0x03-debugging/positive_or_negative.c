#include <stdio.h>
/**
 * positive_or_negative - function to check if n is pos or neg
 * @n: param
 */
void positive_or_negative(int n)
{
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is positive\n", n);
}
