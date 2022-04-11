#include <stdlib.h>
#include <time.h>
#include <stdio>

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf("Last digit of %d is\n", n)
	else if (n == 0)
		printf("Last digit of %d is ")
	
	return (0);
}
