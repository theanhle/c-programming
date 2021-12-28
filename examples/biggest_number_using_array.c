#include <stdio.h>


int add_digit(int n[], int len, int pos, int digit)
{
	int i, num = 0;

	for (i = 0; i < len; i++)
	{	
		if (i == pos)
			num = num*10 + digit;
		num = num*10 + n[i];
	}

	if (pos == len)
		num = num*10 + digit;
	
	return num;
}


int main()
{
	int n[100], len, m, digit, pos, max, num, tmp;
	char c;

	len = 0;
	do
	{
		c = getchar();

		if (c != ' ')
			n[len++] = c - '0';
	} while (c != ' ');
	
	scanf("%d", &m);

	num = add_digit(n, len, 0, 0);
	max = num - 1;
	for (pos = 0; pos < len+1; pos++)
		for (digit = 0; digit < 10; digit++)
		{
			tmp = add_digit(n, len, pos, digit);
			if (tmp % m == 0 && tmp > max)
				max = tmp;
		}

	if (max != num - 1)
		printf("%d", max);
	else
		printf("Impossible");
		
	return 0;
}
