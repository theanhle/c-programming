#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, j, v;
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++)
    {
        for (j = 1; j < 2*n; j++)
        {
            v = j;
            if (v > n)
                v = 2*n - j;
            if (n+1 - i <= v)
                printf("  ");
            else
                printf("%d ", v);
        }
        printf("\n");
    }
    
    return 0;
}