#include <stdio.h>

int main()
{
    int n, inv_n, tmp;
    
    scanf("%d", &n);
    tmp = n;
    
    // 123 -> 321
    // 123 % 10 = 3, 123 / 10 = 12 => 0 * 10 + 3  =   3
    //  12 % 10 = 2,  12 / 10 =  1 => 3 * 10 + 2  =  32
    //   1 % 10 = 1,   1 / 10 =  0 => 32 * 10 + 1 = 321
    
    inv_n = 0;
    while (n > 0)
    {
        inv_n = inv_n*10 + n%10;
        n = n / 10;
    }
    
    if (tmp == inv_n)
        printf("%d is a palindrome.", tmp);
    else
        printf("%d is not a palindrome.", tmp);
    
    return 0;
}
