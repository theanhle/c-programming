#include <stdio.h>

void get_input(int *n, int *k)
{
    int keep_scanning = 1; // flagging
    char c;
    
    do
    {
        printf("Enter n, k: ");
        scanf("%d%d%c", n, k, &c);
        
        if (c != '\n')
        {
            printf("The data you entered is not an integer. Please try again!\n\n");
            while (getchar() != '\n');
        }
        else if (*n < 0 || *k < 0)
            printf("The data you entered is not a positive number. Please try again!\n\n");
        else if (*n > 50 || *k > 50)
            printf("The number you entered is out of the range [0, 50]. Please try again!\n\n");
        else if (*n < *k)
            printf("n must be greater than or equal to k. Please try again!\n\n");
        else
            keep_scanning = 0;
    } while (keep_scanning);
}

long long fac(int n)
{
    long long ans = 1;
    int i;
    for (i = 2; i <= n; i++)
        ans *= i;
    return ans;
}

long long bc(int n, int k)
{
    return fac(n) / fac(k) / fac(n-k);
}

long long bc1(int n, int k)
{
    long long ans = 1;
    int i;
    
    if (k > n - k)
        k = n - k;
    
    for (i = 0; i < k; i++)
    {
        ans *= (n - i);
        ans /= (i + 1);
    }
    return ans;
}

int main()
{
    int n, k;
    
    get_input(&n, &k);
    // printf("n = %d, k = %d, n! = %lld, bc(n, k) = %lld, bc1(n, k) = %lld", n, k, fac(n), bc(n, k), bc1(n, k));
    printf("%lld %lld", bc1(50, 48), bc1(50, 2));

    return 0;
}