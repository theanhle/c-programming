#include <stdio.h>
#include<stdlib.h>
#include <time.h>

int main()
{
    int n, i, count;
    float percent;
    
    srand(time(NULL));
    
    printf("Enter the number of times to toss the coin: ");
    scanf("%d", &n);
    
    for (count = 0, i = 0; i < n; i++)
        count += rand() % 2;
    
    percent = (float) count/n * 100;
    
    printf("The percentage of head results: %.2f\n", percent);
    printf("The percentage of tail results: %.2f\n", 100 - percent);
    
    return 0;
}