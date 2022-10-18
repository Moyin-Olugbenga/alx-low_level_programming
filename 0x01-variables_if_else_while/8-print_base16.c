#include <stdio.h>
/**
 * main - print in base 16
 *
 * Return: 0
*/
imt main(void)
{
	int num;
	char cc;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (cc = 'a'; cc <= 'f'; cc++)
		putchar(cc);
	putchar('\n');
	return (0);
}
