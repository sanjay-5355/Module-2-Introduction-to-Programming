#include <stdio.h>

// Function declaration
int factorial(int n);

int main() 
{
    int num, result;

    // Input from user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Calling the function
    result = factorial(num);

    // Displaying the result
    printf("Factorial of %d is: %d\n", num, result);

    return 0;
}

// Function definition
int factorial(int n) 
{
    int i, fact = 1;

    for (i = 1; i <= n; i++)
     {
        fact *= i;
    }
return fact;
}

