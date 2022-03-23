#include "main.h"
#include <stdio.h>


/**
 *	main - cause an infinite loop
 *	return: 0
 */
int main(void)
{
	int i;

	int *x;
	x=&i;	
	*x = 5;
	printf("i is %d\n",i);

	return (0);
}
