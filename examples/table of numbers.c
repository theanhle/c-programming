// given three positive integers, a, b, n, print the table of n columns of all numbers in range [a, b],

#include <stdio.h>

char len(int n)
{
	int m = 0;

	do
	{
		n /= 10;
		m++;
	} while (n);

	return m;
}

int main()
{
	int a, b, n, width, i;

	scanf("%d%d%d", &a, &b, &n);
	width = len(b) + 1;

	for(i = a; i <= b; i++)
	{
		printf("%*d", width, i);
		if((i-a+1) % n == 0)
			printf("\n");
	}

	return 0;
}
