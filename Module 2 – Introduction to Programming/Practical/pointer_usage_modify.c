#include <stdio.h>

int main() 
{
    int num;
    int *ptr;

    // Take input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Assign the address of num to pointer
    ptr = &num;

    // Display original value
    printf("\nOriginal value entered: %d\n", num);

    // Modify the value using pointer
    *ptr = *ptr + 10;

    // Display modified value
    printf("Value after modification using pointer: %d\n", num);

    return 0;
}


