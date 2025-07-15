#include <stdio.h>

struct Student 
{
    char name[50];
    int roll;
    float marks;
};

int main() 
{
    struct Student students[3];  // Array to store 3 students
    int i;

    // Input details of 3 students
    for (i = 0; i < 3; i++) 
    {
        printf("\nEnter details for Student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);  // Use fgets() if you want full name with spaces
        printf("Roll Number: ");
        scanf("%d", &students[i].roll);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Display the student details
    printf("\n--- Student Details ---\n");
    for (i = 0; i < 3; i++) 
    {
        printf("\nStudent %d\n", i + 1);
        printf("Name       : %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].roll);
        printf("Marks      : %.2f\n", students[i].marks);
    }

    return 0;
}

