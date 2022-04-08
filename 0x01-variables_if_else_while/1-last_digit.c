#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Description: Get a random number and check its last digit, compare it with 5
 * Return: 0
 */
int main(void)
{

	int n;
	int s;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	s = n % 10;

	if (s > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, s);
	}
	else if (s == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, s);
	}
	else if (s < 6)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, s);
	}

	return (0);
}

