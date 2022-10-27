#include "main.h"

/**
 * reverse_array - reverse an array
 * @a: Pointer to array
 * @n: Pointer of elements of an array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temp, counter;

	counter = 0;
	while (counter <= n)
	{
		temp = a[counter];
		a[counter++] = a[n];
		a[n--] = temp;
	}
}
