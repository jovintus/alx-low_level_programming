#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*More headers go here*/

/*Betty style doc for function main goes here*/
/**
 * main - starts the code
 * Description: I think this should be enough
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
