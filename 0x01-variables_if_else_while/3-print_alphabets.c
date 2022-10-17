#include <stdio.h>
/**
 * main - prints alphabets in lower and upper case letter
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
	for (cc = 'A'; cc <= 'Z'; cc++)
	{
		putchar(cc);
	}
	putchar('\n');
	return (0);
}
