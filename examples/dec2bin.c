/*
viet mot function chuyen mot so thap phan sang so nhi phan, long long dec2bin(int dec)
su dung dec2bin de hien thi dang nhi phan cua cac so trong doan [a, b] duoi dang cot:

Enter a, b: 9, 12
Dec       Bin
  8      1000
  9      1001
 10      1010
 11      1011
 12      1100
 
 11%2 -> 1  5%2 -> 1    2%2 -> 0    1%2 -> 1    0    1, 1, 0, 1

                res = 0
 1  1*1 + 0      =    1  
 1  1*10 + 1     =   11        
 0  0*100 + 11   =  011
 1  1*1000 + 011 = 1011
*/

#include <stdio.h>

long long dec2bin(int n);

int main()
{
    int a, b, i;
    printf("Enter a, b: ");
    scanf("%d %d", &a, &b);
    
    printf("%3s%10s\n", "Dec", "Bin");
    for (i = a; i <= b; i++)
        printf("%3d%10lld\n", i, dec2bin(i));
    
    return 0;
}


long long dec2bin(int n)
{
    int digit, res = 0, x10 = 1;
    
    while (n)
    {
        digit = n%2;
        res += digit * x10; // res = digit * x10 + res;
        // printf("%d %d %d\n", digit, x10, res);
        x10 *= 10;
        n /= 2;
    }
    
    return res;
}