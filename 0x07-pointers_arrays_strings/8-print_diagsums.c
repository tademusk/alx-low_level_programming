#include "main.h"
#include <stdio.h>

/**
* print_diagsums - prints a sum of the diagonals of a matrix
*@a: matrix
*@size: size of matrix
*/

void print_diagsums(int *a, int size)
{
	int diagsum1 = 0;
	int diagsum2 = 0;
	int row, i;

	for (row = 0; row < size; row++)
	{
		i = (row * size) + row; /* moves position
					* to diagonal
					*/
		diagsum1 += a[i]; /* takes value of a[i],
				   * adds and saves it
				   */
	}

	for (row = 1; row <= size; row++) /* starts at 1 to be
					    * able to get to
					    * position from top
					    * to bottom
					    */
	{
		i = (row * size) - row;
		diagsum2 += a[i];
	}

	printf("%d, %d\n", diagsum1, diagsum2);
}

