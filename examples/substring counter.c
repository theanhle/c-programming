#include <stdio.h>
#include <string.h>

typedef struct prod
{
	char id[20];
	int quan;
} prod;


int main()
{
	prod a[100], tmp; 
	char id[20];
	int n, i, j, quan, m = 0;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%s%d%*c", id, &quan);
		for (j = 0; j < m; j++)
			if (!strcmp(a[j].id, id))
			{
				a[j].quan += quan;
				break;
			}
		if (j == m)
		{
			strcpy(a[m].id, id);
			a[m++].quan = quan;
		}
	}

	for (i = 0; i < m-1; i++)
		for (j = i+1; j < m; j++)
			if (a[i].quan < a[j].quan)
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}

	for (i = 0; i < m; i++)
		printf("%s %d\n", a[i].id, a[i].quan);

	return 0;
}
