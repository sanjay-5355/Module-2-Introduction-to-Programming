#include <stdio.h>

int main() 
{
    int i;
     // Part 1: Using break
    printf("Using break statement:\n");

    for (i = 1; i <= 10; i++) 
    {
        if (i == 5) {
            break;  // Exit loop when i is 5
        }
        printf("%d ", i);
    }

    // Part 2: Using continue
    printf("\n\nUsing continue statement:\n");

    for (i = 1; i <= 10; i++) 
    {
        if (i == 3) 
        {
            continue;  // Skip printing 3
        }
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}

