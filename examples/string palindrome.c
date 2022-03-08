#include <stdio.h>
#include <string.h>

int doixung(char s[])
{
    int l, r;
    for(l = 0, r = strlen(s) - 1; l < r; l++, r--)
        if (s[l] != s[r])
            return 0;
    return 1;
}

int main()
{
    char s[100];

    printf("Nhap xau s: ");
    scanf("%[^\n]", s);

    if (doixung(s))
        printf("Day la xau doi xung!");
    else
        printf("Day khong la xau doi xung!");

    return 0;
}
