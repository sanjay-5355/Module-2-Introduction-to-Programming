#include <stdio.h>

int main() 
{
    int a, b;

     // Input from user
    printf("Enter first integer (a): ");
    scanf("%d", &a);

    printf("Enter second integer (b): ");
    scanf("%d", &b);

    // Arithmetic Operations
    printf("\n--- Arithmetic Operations ---\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    if (b != 0) 
    {
        printf("a / b = %d\n", a / b);
        printf("a %% b = %d\n", a % b);
    }
    else
    {
        printf("Division and modulus by zero not allowed.\n");
    }

    // Relational Operations
    printf("\n--- Relational Operations ---\n");
    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);
    printf("a > b  : %d\n", a > b);
    printf("a < b  : %d\n", a < b);
    printf("a >= b : %d\n", a >= b);
    printf("a <= b : %d\n", a <= b);

    // Logical Operations
    printf("\n--- Logical Operations ---\n");
    printf("(a && b) : %d\n", a && b);    // True if both are non-zero
    printf("(a || b) : %d\n", a || b);   // True if any is non-zero
    printf("!(a)     : %d\n", !a);      // True if a is zero

    return 0;
}


