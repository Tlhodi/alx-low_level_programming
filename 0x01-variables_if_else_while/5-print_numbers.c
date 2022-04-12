/*
 * File: 5-print_numbers.c
 * Auth: Dominic R
 */

#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0.
 *
 * Return: return 0.
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d\n", num);

	return (0);
}
