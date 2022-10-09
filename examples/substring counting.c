#include <stdio.h>
#include <string.h>


int f1(char *st, char *subst)
{
	int i, j, count = 0;

	if (strlen(st) < strlen(subst))
		return 0;

	for (i = 0; i < strlen(st) - strlen(subst) + 1; i++)
	{
		if (st[i] == subst[0])
		{
			for (j = i+1; j < i + strlen(subst) && st[j] == subst[j-i]; j++);
			if (j == i + strlen(subst))
			{
				count++;
				i = j-1;
			}
		}
	}

	return count;
}


int f2(char *st, char *subst)
{
	int i, count = 0;
	char *p = st;
	
	if (strlen(st) < strlen(subst))
		return 0;

	do
	{
		p = strstr(p, subst);
		if (p != NULL)
		{
			p += strlen(subst);
			count++;
		}
	} while (p != NULL);

	return count;
}

int main()
{
	char st[100], subst[100];
	int i, j, count = 0;
	
	scanf("%[^\n]\n", st);
	scanf("%[^\n]", subst);


	printf("%d %d", f1(st, subst), f2(st, subst));

	return 0;
}
