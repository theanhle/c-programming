#include <stdio.h>
#include <math.h>

int sum(int n)
{
    int i, s = 0;
    
    for (i = 1; i <= n; i++)
        s += i;
    
    return s;
}

long long fac(int n)
{
    int i;
    long long p = 1;
    
    for (i = 2; i <= n; i++)
        p *= i;
        
    return p;
}

int main()
{
    int i, n;
    double e, s = 0;
    
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++)
    {
        e = (double) fac(i) / sum(i);
        if (i%2 == 0)
            e = -e;
        s += e;
    }
    
    printf("%.5lf", s);
    
    return 0;
}