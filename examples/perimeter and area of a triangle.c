#include <stdio.h>
#include <math.h>


int check_triangle(float a, float b, float c)
{
    if (a > 0 && b > 0 && c > 0 && a + b > c && b + c > a && c + a > b)
        return 1;
    return 0;
}


float perimeter(float a, float b, float c)
{
    return a + b + c;
}


float area(float a, float b, float c)
{
    float sp, area;
    
    sp = perimeter(a, b, c) / 2;
    area = sqrt(sp * (sp - a) * (sp - b) * (sp - c));
    
    return area;
}


int main()
{
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    
    if (check_triangle(a, b, c))
        printf("%.2f %.2f", perimeter(a, b, c), area(a, b, c));
    else
        printf("not valid");
    
    return 0;
}

