#include <stdio.h>
#include <math.h>

int is_prime(int n)
{
    int i;
    
    if (n < 2)
        return 0;
    
    for (i = 2; i <= sqrt(n); i++)
        if (n%i == 0)
            return 0;
    
    return 1;
}

int main()
{
    int i, n, m, new_line = 0, count = 0;
    
    scanf("%d %d", &n, &m);
    
    for (i = 2; i <= n; i++)
        if (is_prime(i))
        {
            count++;
            if (new_line)
                printf("\n");
                
            printf("%5d", i);
            
            if (count%m == 0)
                new_line = 1;
            else
                new_line = 0;
        }
	return 0;
}