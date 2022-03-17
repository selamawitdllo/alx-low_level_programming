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
	int d = 97;

	for (n = 0; n <= 15; n++)
	{
		if (n < 10)
			putchar(n + 48);
		else
		{
			putchar(d++);
		}
	}

	putchar('\n');
	return (0);
}
