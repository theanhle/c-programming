#include<stdio.h>

int main ()
{
    int a, b, c, d, min = 0;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a%2 != 0)
        min = a;

    if (b%2 != 0)
        if (min == 0)
            min = b;
        else if (b < min)
            min = b;

    if (c%2 != 0)
        if (min == 0)
            min = c;
        else if (c < min)
            min = c;

    if (d%2 != 0)
        if (min == 0)
            min = d;
        else if (d < min)
            min = d;

    if (min == 0)
        printf("No odd number found!");
    else
        printf("The smallest odd number is %d", min);

    return 0;
}
	
