#include <stdio.h>

int main() 
{
    // // Part 1: One-dimensional array
    // int arr[5],i;
    // printf("Enter 5 elements of array::\n");
    // for(i=0;i<5;i++)
    // {
    // scanf("%d",&arr[i]);
    // }
    // for(i = 0; i <= 4; i++)
    // {
    //     printf("Element %d = %d\n", i+1 , arr[i]);
    // }

    // Part 2: Two-dimensional array (3x3 matrix)
    int matrix[3][3] ,i,j;
    int sum = 0;
    printf("Enter the valuse for Two-Dimensional Array (3x3 Matrix):\n");
   for (i = 0; i < 3; i++)
   {
    for (j = 0; j < 3; j++)
    {
      printf("Enter the value for  %d%d :",i+1,j+1);
      scanf("%d",&matrix[i][j]);

    }
   } 
   
  printf("\nTwo-Dimensional Array (3x3 Matrix):\n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            printf("%d", matrix[i][j]);
            sum += matrix[i][j];
        }
        printf("\n");
    }

    // Display sum of matrix elements
    printf("\nSum of all elements in the 3x3 matrix: %d\n", sum);

    return 0;

}
