#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


char *get_phone()
{
	char *s = calloc(10, sizeof(char));
	int i, ok = 0;

	do
	{
		printf("Enter a 10-digit phone number: ");
		scanf("%s%*c", s);
		if (strlen(s) != 10)
			printf("Plz enter exactly 10 digits.\n\n");
		else
		{
			for (i = 0; i < 10; i++)
				if (!isdigit(s[i]))
				{
					printf("Plz enter only digits.\n\n");
					break;
				}
			ok = i == 10;
		}
	} while (!ok);

	return s;
}


int main()
{
	char *s = get_phone();
	printf("%s", s);

	return 0;
}
