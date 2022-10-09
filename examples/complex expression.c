#include <stdio.h>

long sum(int n)
{
    // int i, s;
    
    // s = 0;
    // for (i = 1; i <= n; i++)
    //     s += i;
    
    // return s;
    
    return n*(1+n)/2;
}

long power(int x, int y)
{
    int i;
    long p = 1;
    
    for (i = 1; i <= y; i++)
        p = p * x;
    
    return p;
}

int main()
{
    // printf("%ld %ld %ld\n", sum(1), sum(3), sum(5));
    // printf("%ld %ld %ld", power(1, 0), power(2, 1), power(3, 2));
    int n, i;
    double ans = 0;
    
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++)
        // ans = ans + power(-1, i) * (double)sum(i)/power(i, i-1);
        if (i%2 == 0)
            ans = ans + power(-1, i) * (double)sum(i)/power(i, i-1);
        else
            ans = ans - power(-1, i) * (double)sum(i)/power(i, i-1);
    
    printf("%.2lf", ans);

    return 0;
}
