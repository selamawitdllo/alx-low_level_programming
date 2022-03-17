#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - function main
 *
 * Discription: this is main function
 *
 * Return: 0 if success, 1 otherwise
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;	
	printf("Last digit of %d is %d ", n, ld);
	if (ld > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (ld == 0)
	{
		printf("and is zero");
	}
	else if (ld < 6)
	{
		printf("and is less than 6 and not 0\n");
	}

	return (0);
}
