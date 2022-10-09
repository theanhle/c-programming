// given two string s, t, count the words in s starting with t

#include <stdio.h>
#include <string.h>


int main()
{
	char s[100], t[100];
	int i, count, r;

	scanf("%[^\n]", s);
	scanf("%*c%[^\n]", t);

	count = !strncmp(s, t, strlen(t));
	for (i = 1; i < strlen(s) - strlen(t) + 1; i++)
		if (s[i-1] == ' ')
			count += !strncmp(s+i, t, strlen(t));

	printf("%d", count);

	return 0;
}
