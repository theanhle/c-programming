#include <stdio.h>
#include <math.h>

/*
91 3 -> 981

int add_digit(int n, int digit, int pos);
int count_digits(int n);

add_digit(1234, 8, 1) 1234 -> 123   4 -> 1238 + 4 
count_digits(1234) -> 4                                 1234 12  34

n
l = n/10^pos; 123       12
r = n%10^pos; 4         34

(n/10^pos) * 10 + digit -> 1238 -> 12384        128 34 -> 12834   128*100 + 34
((n/10^pos) * 10 + digit) * 10^pos -> 1280 + 4
((n/10^pos) * 10 + digit) * 10^pos + n%10^pos -> 1280 + 4 -> 1284

max = n;
len = count_digits(n);

for (d = 0; d < 10; d++)
    for (p = 0; p <= len; p++)
    {
        new_number = add_digit(n, d, p);
        if (new_number % m == 0 && new_number > max)
            max = new_number;
    }
*/

int add_digit(int n, int digit, int pos)
{
    int m = pow(10, pos); 
    return (n/m * 10 + digit) * m + n%m;
}

int count_digits(int n)
{
    int len = 0;
    do
    {
        n /= 10;
        len++;
    } while (n);
    
    return len;
}

int main()
{
    int n, m, max, d, p, n_digits, new_number;
    scanf("%d %d", &n, &m);
    
    max = n;
    n_digits = count_digits(n);
    
    for (d = 0; d < 10; d++)
        for (p = 0; p <= n_digits; p++)
        {
            new_number = add_digit(n, d, p);
            if (new_number % m == 0 && new_number > max)
                max = new_number;
        }
    
    if (max == n)
        printf("impossible");
    else
        printf("%d", max);
    
    return 0;
}






