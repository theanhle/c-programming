#include <stdio.h>

void dec2bin(int dec, char bin_digits[], int *len_bin)
{
    *len_bin = 0;
    do
    {
        bin_digits[(*len_bin)++] = dec % 2;
        dec /= 2;
    } while (dec);
}

void print_bin(char bin_digits[], int len_bin)
{
    int i;
    for (i = len_bin - 1; i >= 0; i--)
        printf("%d", bin_digits[i]);
}

int main()
{
    char bin_digits[100];
    int len_bin, n = 11;
    
    dec2bin(n, bin_digits, &len_bin);
    print_bin(bin_digits, len_bin);

    return 0;
}
