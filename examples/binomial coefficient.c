#include <stdio.h>

long double fac(int n)
{
	int i;
	long double res = 1;

	for (i = 2; i <= n; i++)
		res *= i;
	
	return res;
}

long binom(int n, int k)
{
	long res = 1;
	int i;

	if (k > n - k)
		k = n - k;
	 
	for (i = 1; i <= k; i++)
		res = res * (n - i + 1) / i;
	

	return res;
}


int main()
{
	int n, k;

	scanf("%d%d", &n, &k);

	printf("%.0Lf\n", fac(n) / (fac(k) * fac(n - k)));
	printf("%ld", binom(n, k));
	
	return 0;
}
