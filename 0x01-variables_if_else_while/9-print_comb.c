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

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
