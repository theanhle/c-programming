// Viet ham nhan vao hai so a, b va tra ve tong cac so chan
// tong cac so le, va gia tri trung binh cua cac so trong doan
// [a, b]

#include <stdio.h>

void cal(int a, int b, int *even_sum, int *odd_sum, float *avg)
{
    int i;
    *even_sum = 0;
    *odd_sum = 0;
    *avg = 0;
    
    for (i = a; i <= b; i++)
    {
        if (i%2 == 0)
            *even_sum += i;
        else
            *odd_sum += i;
        *avg += i;
    }
    *avg /= (b - a + 1);
}

float cal1(int a, int b, int *even_sum, int *odd_sum)
{
    int i;
    float avg;
    *even_sum = 0;
    *odd_sum = 0;
    avg = 0;
    
    for (i = a; i <= b; i++)
    {
        if (i%2 == 0)
            *even_sum += i;
        else
            *odd_sum += i;
        avg += i;
    }
    avg /= (b - a + 1);
    
    return avg;
}


int main()
{
    int a, b, s1, s2;
    float avg;
    scanf("%d%d", &a, &b);
    avg = cal1(a, b, &s1, &s2);
    printf("even_sum = %d, odd_sum = %d, avg = %.2f", s1, s2, avg);
    
    return 0;
}
