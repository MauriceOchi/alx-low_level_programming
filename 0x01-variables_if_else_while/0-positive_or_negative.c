#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *  main - assigns a random number to int n everytime
 *  it executes, and prints it
 *  Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes here */
	if (n >= 0)
		printf("n is positive\n");
	else
		prifntf("n is Negative\n");
	return (0);
}
