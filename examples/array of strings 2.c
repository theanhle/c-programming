#include <stdio.h>
#include <string.h>

void get_data(char masv[][20], char hoten[][30], double toan[], double ly[], double hoa[], int *n)
{
    int i;
    
    printf("Nhap so luong sv: ");
    scanf("%d%*c", n);
    
    for (i = 0; i < *n; i++)
    {
        printf("Sinh vien %d:\n", i+1);
        printf(" + Ma sv: ");
        scanf("%[^\n]%*c", masv[i]);
        printf(" + Ho ten: ");
        scanf("%[^\n]%*c", hoten[i]);
        printf(" + Diem Toan: ");
        scanf("%lf%*c", &toan[i]);
        printf(" + Diem Ly: ");
        scanf("%lf%*c", &ly[i]);
        printf(" + Diem Hoa: ");
        scanf("%lf%*c", &hoa[i]);
    }
}

void print_data(char masv[][20], char hoten[][30], double toan[], double ly[], double hoa[], double diemtb[], int n)
{
    int i;
    
    printf("\n%-8s%-20s%5s%5s%5s%5s\n", "Ma SV", "Ho Ten", "Toan", "Ly", "Hoa", "TB");
    printf("================================================\n");
    
    for (i = 0; i < n; i++)
        printf("%-8s%-20s%5.1lf%5.1lf%5.1lf%5.1lf\n", masv[i], hoten[i], toan[i], ly[i], hoa[i], diemtb[i]);
}

void swap1(double *a, double *b)
{
    double t = *a;
    *a = *b;
    *b = t;
}

void swap2(char s1[], char s2[], int len)
{
    char s[len];
    strcpy(s, s1);
    strcpy(s1, s2);
    strcpy(s2, s);
}


void sort(char masv[][20], char hoten[][30], double toan[], double ly[], double hoa[], double diemtb[], int n)
{
    int i, j;
    char ma[20], ht[30];
    
    for (i = 0; i < n; i++)
        diemtb[i] = (toan[i] + ly[i] + hoa[i]) / 3;
    
    
    for (i = n - 1; i > 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            if (diemtb[j] < diemtb[j+1])
            {
                swap2(masv[j], masv[j+1], 20);
                swap2(hoten[j], hoten[j+1], 30);
                swap1(&toan[j], &toan[j+1]);
                swap1(&ly[j], &ly[j+1]);
                swap1(&hoa[j], &hoa[j+1]);
                swap1(&diemtb[j], &diemtb[j+1]);
            }
        }
    }
}

int main()
{
    char masv[100][20], hoten[100][30];
    double toan[100], ly[100], hoa[100], diemtb[100];
    int n;
    
    get_data(masv, hoten, toan, ly, hoa, &n);
    print_data(masv, hoten, toan, ly, hoa, diemtb, n);
    sort(masv, hoten, toan, ly, hoa, diemtb, n);
    print_data(masv, hoten, toan, ly, hoa, diemtb, n);
    
    return 0;
}
