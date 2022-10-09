/* One of the simple ways to create a 2D array is to create a 1D array and treat it 
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *a = (int*)calloc(10, 4), i;

	for (i = 0; i < 10; i++)
		a[i] = i;

	free(a);

	return 0;
}
