/* this exmaple demonstrates how to pass a function as a parameter in C */

#include <stdio.h>


void sort(int a[], int n, int (*cmp)(int x, int y))
{
	for (int i = 0; i < n-1; i++)
		for (int j = i+1; j < n; j++)
			if (cmp(a[i], a[j]))
			{
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
}


int inc_fn(int x, int y)
{
	return x > y;
}


int dec_fn(int x, int y)
{
	return x < y;
}


void print(int a[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
}


int main()
{
	int n = 5, a[] = {4, 5, 2, 9, 1};

	sort(a, n, inc_fn);
	print(a, n);
	
	sort(a, n, dec_fn);
	print(a, n);

	return 0;
}
