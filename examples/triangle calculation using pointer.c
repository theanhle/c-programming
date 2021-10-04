#include <stdio.h>
#include <math.h>

void input_triangle(char title[30], int *x1, int *y1, int *x2, int *y2, int *x3, int *y3);
double dist(int x1, int y1, int x2, int y2);
void calculate_pa(int x1, int y1, int x2, int y2, int x3, int y3, double *p, double *s);


int main()
{
    int x1, y1, x2, y2, x3, y3;
    double p, s, max_a, max_p;
    
    input_triangle("Enter the first triangle:", &x1, &y1, &x2, &y2, &x3, &y3);
    calculate_pa(x1, y1, x2, y2, x3, y3, &p, &s);
    
    max_a = s;
    max_p = p;
    
    input_triangle("Enter the second triangle:", &x1, &y1, &x2, &y2, &x3, &y3);
    calculate_pa(x1, y1, x2, y2, x3, y3, &p, &s);
    
    if (max_a < s)
    {
        max_a = s;
        max_p = p;
    }
    
    input_triangle("Enter the third triangle:", &x1, &y1, &x2, &y2, &x3, &y3);
    calculate_pa(x1, y1, x2, y2, x3, y3, &p, &s);
    
    if (max_a < s)
    {
        max_a = s;
        max_p = p;
    }
    
    printf("max_a = %.2lf, max_p = %.2lf", max_a, max_p);

    return 0;
}


void input_triangle(char title[30], int *x1, int *y1, int *x2, int *y2, int *x3, int *y3)
{
    printf("%s\n", title);
    printf("+ Enter (x1, y1): ");
    scanf("%d %d", x1, y1);
    printf("+ Enter (x2, y2): ");
    scanf("%d %d", x2, y2);
    printf("+ Enter (x3, y3): ");
    scanf("%d %d", x3, y3);
}


double dist(int x1, int y1, int x2, int y2)
{
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}


void calculate_pa(int x1, int y1, int x2, int y2, int x3, int y3, double *p, double *s)
{
    double d1, d2, d3, sp;
    
    d1 = dist(x1, y1, x2, y2);
    d2 = dist(x2, y2, x3, y3);
    d3 = dist(x3, y3, x1, y1);
    
    *p = d1 + d2 + d3;
    sp = *p / 2;
    *s = sqrt(sp * (sp - d1) * (sp - d2) * (sp - d3));
}
