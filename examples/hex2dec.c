#include <stdio.h>
#include <string.h>

int value(char c)
{
	if ('0' <= c && c <= '9')
		return c - '0';
	else if ('A' <= c && c <= 'F')
		return c - 'A' + 10;
	else if ('a' <= c && c <= 'f')
		return c - 'a' + 10;
	return -1;
}

int main()
{
	char hex[100];
	int i, val= 1;
	long dec = 0, ex = 1;

	scanf("%s", hex);

	for (i = strlen(hex) - 1; i > 1 && val != -1; i--)
	{
		val = value(hex[i]);
		if (val != -1)
			dec += val * ex;
		ex *= 16;
	}
	if (hex[0] != '0' || hex[1] != 'x')
		val = -1;

	if (val != -1)
		printf("%ld", dec);
	else
		printf("Invalid input");

	return 0;
}
