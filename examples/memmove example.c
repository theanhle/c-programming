#include <stdio.h>
#include <string.h>


int main()
{
	int a[] = {1, 2, 3, 4, 5}, b[5] = {0};
	char s[] = "abcde";

	/* memmove (dest, source, number of bytes) */
	memmove(b, a, sizeof(a));
	memmove(s+1, s+2, strlen(s+2)+1);

	for (int i = 0; i < 5; i++)
		printf("%d ", b[i]);

	printf("\n%s", s);

	return 0;
}
