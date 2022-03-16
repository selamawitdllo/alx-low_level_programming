#include "main.h"
#include <stdio.h>

/**
 *	void print_putc - Prints _putchar
 *
 *	Description: This is a function that prints a statemtnt
 */
void print_putc(void)
{
	printf("%s\n", "_putchar");
}

/**
 *	main function - Main entry point
 *
 *	Description: main function
 *
 *	Return: 0 if success, o otherwise
 */
int main(void)
{
	print_putc();
	return (0);
}
