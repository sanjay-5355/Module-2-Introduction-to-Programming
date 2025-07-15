#include <stdio.h>  // Preprocessor directive

// Define a constant
#define PI 3.14159

int main()
{
    // Single-line comment: Declaring variables
    
    int age = 25;              // Integer variable
    char grade = 'A';          // Character variable
    float percentage = 89.75;  // Floating point variable

    // Displaying values
    printf("Student Information:\n");
    printf("Age: %d years\n", age);
    printf("Grade: %c\n", grade);
    printf("Percentage: %.2f%%\n", percentage);

    // Using constant
    printf("Value of PI (constant): %.5f\n", PI);

    return 0;  // End of program
}

