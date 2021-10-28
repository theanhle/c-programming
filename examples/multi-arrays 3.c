#include <stdio.h>
#include <string.h>

void nhap_dl(char masv[][15], char hoten[][31], double diem[], int *n)
{
    int i;
    
    printf("So sinh vien: ");
    scanf("%d%*c", n);
    
    for (i = 0; i < *n; i++)
    {
        printf("\nSinh vien %d:\n", i+1);
        printf(" + Ma SV: ");
        scanf("%[^\n]%*c", masv[i]);
        printf(" + Ho ten: ");
        scanf("%[^\n]%*c", hoten[i]);
        printf(" + Diem: ");
        scanf("%lf%*c", &diem[i]);
    }
}

void hien_thi(char masv[][15], char hoten[][31], double diem[], int n)
{
    int i;
    
    printf("\n%-10s%-25s%6s\n", "Ma SV", "Ho Ten", "Diem");
    printf("=========================================\n");
    for (i = 0; i < n; i++)
        printf("%-10s%-25s%6.1lf\n", masv[i], hoten[i], diem[i]);
}

void sap_xep(char masv[][15], char hoten[][31], double diem[], int n)
 {
     int i, j;
     char st[31];
     double t;
     for (i = n - 1; i > 0; i--)
     {
         for (j = 0; j < i; j++) {
             if (diem[j] < diem[j+1])
             {
                 t = diem[j];
                 diem[j] = diem[j+1];
                 diem[j+1] = t;
                 
                 strcpy(st, masv[j]);
                 strcpy(masv[j], masv[j+1]);
                 strcpy(masv[j+1], st);
                 
                 strcpy(st, hoten[j]);
                 strcpy(hoten[j], hoten[j+1]);
                 strcpy(hoten[j+1], st);
             }
         }
     }
 }

int main()
{
    char masv[100][15], hoten[100][31];
    double diem[100];
    int n;
    
    nhap_dl(masv, hoten, diem, &n);
    hien_thi(masv, hoten, diem, n);
    sap_xep(masv, hoten, diem, n);
    printf("\nHai sinh vien co diem cao nhat:\n");
    hien_thi(masv, hoten, diem, 2);
    
    return 0;
}
