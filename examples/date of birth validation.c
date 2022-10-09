#include <stdio.h>

void clear_buffer()
{
	while (getchar() != '\n');
}

void get_dob(int *d, int *m, int *y)
{
	char c, keeptrying = 1, rc;

	do
	{
		printf("Enter your date of birth (dd/mm/yyyy): ");
		rc = scanf("%2d/%2d/%4d%c", d, m, y, &c);
		if (rc != 4)
		{
			printf("Input data is not valid. Plz try again!\n\n");
			clear_buffer();
		}
		else if (c != '\n')
		{
			printf("Input data is not valid. Plz try again!\n\n");
			clear_buffer();
		}
		else if (*d < 1 || *d > 31 || *m < 1 || *m > 12 || *y < 1990)
			printf("Input data is not valid. Plz try again!\n\n");
		else if (*m == 2)
		{
			if (*y%400 == 0 || (*y%4 == 0 && *y%100 != 10))
			{
				if (*d > 29)
					printf("Input data is not valid. Plz try again!\n\n");
			}
			else if (*d > 28)
				printf("Input data is not valid. Plz try again!\n\n");
		}
		else if ((*m == 4 || *m == 6 || *m == 9 || *m == 11) && *d == 31)
			printf("Input data is not valid. Plz try again!\n\n");
		else
			keeptrying = 0;
	} while (keeptrying);
}

int main()
{
	int d, m, y;
	get_dob(&d, &m, &y);
	printf("%d %d %d", d, m, y);

	return 0;
}
