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
	int n = 0;

	for (n = 'z'; n >= 'a'; n--)
		putchar(n);

	putchar('\n');
	return (0);
}
