#include <stdio.h>
#include <math.h>


int perfect_num(int n)
{
	int i, s;
	if (n == 1)
		return 0;

	for (s = 1, i = 2; i <= sqrt(n); i++)
		if (n%i == 0)
		{
			s += i;
			if (n/i != i)
				s += n/i;
		}
	return s == n;
}


int main()
{
	int n;

	scanf("%d", &n);
	
	if (perfect_num(n))
		printf("True");
	else
		printf("False");

	return 0;
}
