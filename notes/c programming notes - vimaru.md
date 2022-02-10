# C Programming Notes

# Chương 1

- 1970s, Dennis Ritchie, Ken Thompson, Brian Kernighan, Bell Lab (AT&T)
- C: Middle-level Programming Language: Machine Languages → Low-level Programming Languages → .. → High-level Programming Languages → Human Languages
- IDEs for C Programming:
    - DevCpp (Windows), C-Free, Code Block
    - Online IDEs: [onlinegdb.com](http://onlinegdb.com)
    - Vim
    - Problem → {modules}: C program = {functions: 1 main function}
    - Functions:
        - Built-in Functions: math.h {pow, sqrt}, stdio.h {printf, scanf} ...
        - User-defined Functions
- Keywords: 32 keywords
- Variables: Problem {Inputs} → Solve a problem → Outputs
    - Problem: $ax^2 + bx + c = 0$ → $x_1, x_2$
    - Variables: Primary Memory
    - Data Types:
        - char: 1 byte → $2^8 = 256: [-128, 127], [0, 255]$
        - int: 4 bytes: $2^{32} \rightarrow [-2^{31}, 2^{31} - 1]$
        - Basic data types: char, int, float, double
        
        ```c
        printf("%lu %lu %lu %lu", sizeof(char), sizeof(int), sizeof(float), sizeof(double));
        // Output: 1 4 4 8
        ```
        
- Operators:
    - Arithmetic Operators: + - * / %
    
    ```c
    #include <stdio.h>
    
    int main()
    {
        int a = 5, b = 2;
        
        printf("%d + %d = %d\n", a, b, a + b); // format string -> what, how
        printf("%d - %d = %d\n", a, b, a - b);
        printf("%d * %d = %d\n", a, b, a * b);
        printf("%d / %d = %d\n", a, b, a / b);
        printf("%d %% %d = %d\n", a, b, a % b);
        
        return 0;
    }
    ```
    
    - Relational Operators: >, <, >=, <=, ==, !=   → {True: 1, False: 0}
    - Logical Operators: && (and), || (or), ! (not)
    - Bit operators: &, |, ~, ^
    - Shorthand Assignment Operators: +=, -=, *=, /=, .., ++,--
    
    ```c
    #include <stdio.h>
    
    int main()
    {
    	int a = 3, b;
    
    	/* a = a + 2; */
    	a += 2; //shorthand assignment operator
    	a++; // a = a + 1
    	/* ++a; */
    	a--;
    	a *= 3;
    
    	/* printf("a = %d\n", a); */
    	
    	/* b = ++a + 2; */
    	b = a++ + 2;
    
    	printf("a = %d, b = %d", a, b);
    
    	return 0;
    }
    ```
    
- Notes:
    - Each statement ends with a semicolon (;)
    - Comments: // (inline / one-line comment), /* ...*/ (multiline comment)
    - Naming a variable:
        - combination: letters, digits, underscore
        - First letter: a letter / underscore
        - Length of a variable: 31 characters
- Algorithm Flowchart
- Example:

```c
#include <stdio.h>

int main()
{
	int result;
	float m1, m2, m3, m4, grade;

	printf("Enter m1, m2, m3, m4: ");
	scanf("%f%f%f%f", &m1, &m2, &m3, &m4);

	grade = (m1 + m2 + m3 + m4) / 4;
	result = grade >= 60;

	printf("Result: %d", result);

	return 0;
}
```

- Công việc:
    - Xem lại chương 1
    - Xem lệnh printf, scanf
    - Xem ví dụ và viết chương trình tính điểm của môn LT C
    - Xem chương 2
    - Các câu lệnh if, switch, for, while
- ..