
#include <stdio.h>
#include <string.h>

int main() 
{
char str1[100], str2[100]; 
int length; 

    // Input two strings
    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    // Concatenate strings
    strcat(str1, str2);

    length=strlen(str1);
  

    // Display result
    printf("\nConcatenated String: %s\n", str1);
    
    printf("Length of Concatenated String: %d\n", length);

    return 0;
}
