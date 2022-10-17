#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print the last digit of the number stored in the variable
 *
 * Return: 0
*/
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;

	if (a > 5)
	{
		printf("Last digit of %n is %n and is greater than 5\n", n, a);
	}
	else if (a == 0)
	{
		printf("Last digit of %n is %n and is 0\n", n, a);
	}
	else
	{
		printf("Last digit of %n is %n and is less than 6 and not 0\n", n, a);
	}
	return (0);
}

