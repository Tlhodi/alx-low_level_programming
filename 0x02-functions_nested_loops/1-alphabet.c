#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.c"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');
}
