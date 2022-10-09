#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void linear_shuffle(int a[], int n)
{
	int i, m, j, tmp;

	for (m = n, i = 0; i < n; i++, m--)
	{
		j = i + rand() % m;
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}

int main()
{
	int a[] = {1, 3, 2, 4, 5};
	int n = 5;

	srand(time(NULL));
	linear_shuffle(a, n);
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);

	return 0;
}
