#include "main.h"

/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}

Question 2.

#include "main.h"

/**
 * print_alphabet_x10 - print the alphabest 10 times
 * Return: void here
 */

void print_alphabet_x10(void)
{
	char c;
	int i = 0;

		while (i <= 9)
		{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
			_putchar('\n');
			i++;
		}
}
