#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - is a main function
 *Return: 0 if success
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Random number: %d\n", n);
	return (0);
}
