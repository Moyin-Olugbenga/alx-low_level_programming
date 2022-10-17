#include <stdio.h>
/**
 * main - prints alphabet in lowercase
 *
 * Return: always 0
*/
int main(void)
{
	char cc;

	for (cc = 'a'; cc <= 'z'; cc++)
	{
		putchar(cc);
	}
	putchar('\n');
	return (0);
}
