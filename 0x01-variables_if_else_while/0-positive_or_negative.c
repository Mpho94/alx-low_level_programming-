#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry piont
 *Discription: 'Check if number is positive,zero or negative'
 *Return: Always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is posivite\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else 
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
