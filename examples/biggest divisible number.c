// find the biggest number in range [a, b] that is divisible by c

#include <stdio.h>


int main()
{
	int a, b, c, ans, i;
	
	scanf("%d%d%d", &a, &b, &c);

	ans = b + 1;
	for (i = b; i >= a && ans == b+1; i--)
		if (i%c == 0)
			ans = i;

	if (ans == b+1)
		printf("There is no number in range [a, b] that is divisible by c");
	else
		printf("The biggest number in range [a, b] that is divisible by c is %d", ans);


	return 0;
}
