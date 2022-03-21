#include "main.h"

/**
 *swap_int(int *a, int *b) - swaps the values from one integer to another
 *@a: first integer
 *@b: second integer
 *
 *return: no return
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
