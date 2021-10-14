#include <stdio.h>
#include <ctype.h>

int count_digits(int n)
{
    int len = 0;
    do
    {
        n /= 10;
        len++;
    } while (n);
    
    return len;
}

int main()
{
    int a, b, i, j, width1, width2;
    
    printf("Enter the low end of the range: ");
    scanf("%d", &a);
    printf("Enter the high end of the range: ");
    scanf("%d", &b);
    
    width1 = count_digits(b);
    width2 = count_digits(b*b) + 1;
    
    printf("%*s", width1, " ");
    for (i = a; i <= b; i++)
        printf("%*d", width2, i);
        
    for (i = a; i <= b; i++)
    {
        printf("\n%*d", width1, i);
        for (j = a; j <= b; j++)
            printf("%*d", width2, i*j);
    }
    
    return 0;
}