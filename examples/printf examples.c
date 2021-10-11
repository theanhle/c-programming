#include <stdio.h>

int main()
{
    int a = 123;
    float b = 1.236;
    float c = 1234567.89;
    
    printf("%c %d %o %x\n", a, a, a, a);
    printf("|%5d|%-5d|%05d|\n", a, a, a);
    printf("|%x|%X|%5x|%#5x|%#3X|\n\n", a, a, a, a, a);
    
    printf("|%f|%.1f|%.2f|%5.2f|\n\n", b, b, b, b);
    
    printf("|%f|%.1f|%.1f|%5.1f|\n\n", c, c, c, c);
    
    printf("|%e|%e|\n", b, c);
    
    // display in f or e format,
    // whichever is more compact for the given value and precision.
    printf("|%g|%g|\n", b, c);
    
    printf("%f", c);

    return 0;
}
