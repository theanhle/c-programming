#include <stdio.h>
#include <stdlib.h>

void get_array(int **arr, int *len);
void print_array(int *arr, int len);


int main()
{
	int *a, n;

	get_array(&a, &n);
	if (a != NULL)
		print_array(a, n);

	return 0;
}


/* here we need to pass a pointer to a pointer */
void get_array(int **arr, int *len)
{
	int i;

	printf("Enter number of elments: ");
	scanf("%d", len);

	/* dynamically allocate memory for *len elements */
	*arr = NULL;
	*arr = (int*)malloc(*len * sizeof(int));
	/* dynamically allocate memory for *len elements and initialize them with 0 */
	/* *arr = (int*)calloc(*len, sizeof(int)); */

	if (*arr == NULL)
		printf("Memory allocation did not complete successfully!");
	else
	{
		printf("Enter %d elements: ", *len);
		for (i = 0; i < *len; i++)
			scanf("%d", *arr + i);
	}
}


void print_array(int *arr, int len)
{
	int i;

	for (i = 0; i < len; i++)
		printf("%d ", arr[i]);
}
