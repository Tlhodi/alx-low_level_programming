/*
 * File: 6-print_numberz.c
 * Auth: Dominic R
 */

#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0,
 *        only using putchar and without char variables.
 *
 * Return: return 0.
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar(num);

	putchar('\n');

	return (0);
}
