#include <stdio.h>
#include <limits.h>

int main()
{
	/* printf("%e", (double)LONG_MAX); */
	long dec;
	char a[100], n;
	/* scanf("%ld", &dec); */
	dec = (long)9.2e18;
	
	n = 0;
	do
	{
		a[n++] = dec % 2;
		dec /= 2;
	} while (dec);
	while (n--)
		printf("%d", a[n]);
	
	return 0;
}
