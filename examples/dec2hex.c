#include <stdio.h>
#include <string.h>

int main()
{
	int dec, hex_len;
	char hex[100];
	char hex_digits[17] = "0123456789ABCDEF";
	
	scanf("%d", &dec);
	
	hex_len = 0;
	do
	{
		hex[hex_len++] = hex_digits[dec % 16];
		dec /= 16;
	} while (dec);

	while (hex_len--)
		printf("%c", hex[hex_len]);

	return 0;
}
