#include <stdio.h>


int get_int(int min, int max)
{
	int n, m, ok;
	char c;

	do
	{
		ok = 0;
		printf("Enter an integer in range [%d, %d]: ", min, max);
		m = scanf("%d%c", &n, &c);
		if (c != '\n')
		{
			printf("Your input contains trailing characters. Plz try again!\n\n");
			while (getchar() != '\n');	
		}
		else if (m != 2)
		{
			printf("Your input is not an integer. Plz try again!\n\n");
			while (getchar() != '\n');	
		}
		else if (n < min || n > max)
			printf("Your input is outside the range [%d, %d]. Plz try again!\n\n", min, max);
		else
			ok = 1;
	} while (!ok);

	return n;
}


int main()
{
	int n;

	n = get_int(10, 20);
	printf("n = %d", n);

	return 0;
}
