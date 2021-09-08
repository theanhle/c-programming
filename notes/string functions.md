### String Functions

```strcat``` appends a copy of the source string to the end of destination string
```c
#include <stdio.h>
#include <string.h>

int main()
{
    char dest[20] = "I am a", src[20] = " C program.";
    strcat(dest, src);
    printf("%s", dest);

    return 0;
}
```
```
I am a C program.
```
