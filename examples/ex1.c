// viet chuong trinh cho nguoi dung nhap vao mot so nguyen va
// in ra 1 neu so do la so co ba chu so va chia het cho 3
// nguoc lai thi in ra 0

#include <stdio.h>

int main()
{
    int n, cd1, cd2, res;
    
    scanf("%d", &n);
    
    cd1 = (-999 <= n && n <= -100) || (100 <= n && n <= 999);
	cd2 = n%3 == 0;
	res = cd1 && cd2;
    
    printf("%d", res);

    return 0;
}
