#include <stdio.h>
#define MAX_SIZE 100

void get_array(int a[], int *n)
{
    int i;
    
    printf("Enter number of elements: ");
    scanf("%d", n);
    
    printf("Enter %d elements (separated by a space): ", *n);
    for (i = 0; i < *n; i++)
        scanf("%d", &a[i]);
}

int find_odd_max(int a[], int n)
{
    int i, ret = 0;
    for (i = 0; i < n; i++)
        if (a[i]%2 != 0)
        {
            if (ret == 0)
                ret = a[i];
            else if (ret < a[i])
                ret = a[i];
        }
    return ret;
}

int main()
{
    int n, a[MAX_SIZE], ans;
    
    get_array(a, &n);
    ans = find_odd_max(a, n);
    
    if (ans == 0)
        printf("No odd number found.");
    else
        printf("The biggest odd number is %d", ans);

    return 0;
}
