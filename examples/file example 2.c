#include <stdio.h>

typedef struct sinhvien
{
	char ma[5];
	char hoten[31];
	char tinh[21];
	double diem;
} sinhvien;

int main()
{
	FILE *fp = fopen("data.txt", "r");
	sinhvien sv[100], tg;
	int n = 0, i, j;

	while (fscanf(fp, "%[^;];%[^;];%[^;];%lf\n", sv[n].ma, sv[n].hoten,
			sv[n].tinh, &sv[n].diem) == 4)
		n++;
	fclose(fp);

	for (i = 0; i < n-1; i++)
		for (j = i+1; j < n; j++)
			if (sv[i].diem < sv[j].diem)
			{
				tg = sv[i];
				sv[i] = sv[j];
				sv[j] = tg;
			}
	
	fp = fopen("data.txt", "w");
	for (i = 0; i < n; i++)
		fprintf(fp, "%s;%s;%s;%.1lf\n", sv[i].ma, sv[i].hoten, sv[i].tinh, sv[i].diem);
	fclose(fp);

	return 0;
}
