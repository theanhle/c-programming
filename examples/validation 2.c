// write a function named get_id allowing users input an id
// starting with a capital letter followed by four digits

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char *get_id()
{
	char *s = malloc(6 * sizeof(char)), c;
	int rc, keeptrying = 1;

	do
	{
		printf("Enter an ID (starting with an capital letter followed by four digits): ");
		rc = scanf("%5s%c", s, &c);
		if (rc != 2)
		{
			printf("No input accepted. Plz try again!\n\n");
			while (getchar() != '\n');
		}
		else if (c != '\n')
		{
			printf("Trailing characters. Plz try again!\n\n");
			while (getchar() != '\n');
		}
		else if (s[0] < 'A' || s[0] > 'Z' || !isdigit(s[1]) || !isdigit(s[2]) || !isdigit(s[3]) || !isdigit(s[4]))
			printf("ID must be a string of length 5 starting with a capital letter followed by four digits. Plz try again!\n\n");
		else
			keeptrying = 0;
	} while (keeptrying);

	return s;
}

int main()
{
	char s[6];

	printf("ID: %s", get_id());

	return 0;
}
