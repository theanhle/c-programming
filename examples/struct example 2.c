/* 1. Viet ham cho nguoi dung nhap vao thong tin cua n sinh vien: */
/* 	+ ma sinh vien: so tu nhien (1234) */
/* 	+ ho ten: xau ki tu dai khong qua 20 */
/* 	+ diem: so thuc */
/* 2. Viet ham ghi thong tin n sinh vien da nhap vao file sinhvien.txt */
/* 3. Viet ham doc thong tin sinh vien tu file sinhvien.txt */
/* 4. Viet ham hien thi thong tin sinh vien duoi dang bang */


#include <stdio.h>

void nhap(int masv[], char hoten[][21], double diem[], int *n);
void hienthi(int masv[], char hoten[][21], double diem[], int n);
void luu(int masv[], char hoten[][21], double diem[], int n, char file[]);
void doc(int masv[], char hoten[][21], double diem[], int *n, char file[]);

int main()
{
	int n;
	int masv[100];
	char hoten[100][21];
	double diem[100];

	/* nhap(masv, hoten, diem, &n); */
	/* hienthi(masv, hoten, diem, n); */
	/* luu(masv, hoten, diem, n, "sinhvien.txt"); */
	
	doc(masv, hoten, diem, &n, "sinhvien.txt");
	hienthi(masv, hoten, diem, n);

	return 0;
}


void nhap(int masv[], char hoten[][21], double diem[], int *n)
{
	int i;

	printf("So sinh vien: ");
	scanf("%d", n);
	for (i = 0; i < *n; i++)
	{
		printf("+ Sinh vien %d:\n", i+1);
		printf("  - Ma SV: ");
		scanf("%*c%d", &masv[i]);
		printf("  - Ho ten: ");
		scanf("%*c%[^\n]", hoten[i]);
		printf("  - Diem: ");
		scanf("%*c%lf", &diem[i]);
	}
}


void hienthi(int masv[], char hoten[][21], double diem[], int n)
{
	int i;

	printf("Danh sach sinh vien:\n");
	printf("%-5s  %-20s  %6s\n", "Ma SV", "Ho Ten", "Diem");
	for (i = 0; i < n; i++)
		printf("%5d  %-20s  %6.2lf\n", masv[i], hoten[i], diem[i]);
}


void luu(int masv[], char hoten[][21], double diem[], int n, char file[])
{
	int i;
	FILE *fp = fopen(file, "w");

	for (i = 0; i < n; i++)
		fprintf(fp, "%d|%s|%.2lf\n", masv[i], hoten[i], diem[i]);

	fclose(fp);
}


void doc(int masv[], char hoten[][21], double diem[], int *n, char file[])
{
	FILE *fp = fopen(file, "r");

	(*n) = 0;
	while (fscanf(fp, "%d|%[^|]|%lf%*c", &masv[*n], hoten[*n], &diem[*n]) == 3)
		(*n)++;

	fclose(fp);
}
