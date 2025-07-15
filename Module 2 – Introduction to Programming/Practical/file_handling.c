#include <stdio.h>

int main() 
{
    FILE *fp;
    char str[100] = "Hello! This is a test string written to a file.";
    char buffer[100];

    // Step 1: Open file in write mode
    fp = fopen("myfile.txt", "w");
    if (fp == NULL) 
    {
        printf("Error opening file for writing.\n");
        return 1;
    }

    // Step 2: Write to the file
    fputs(str, fp);

    // Step 3: Close the file
    fclose(fp);

    // Step 4: Open file in read mode
    fp = fopen("myfile.txt", "r");
    if (fp == NULL) 
    {
        printf("Error opening file for reading.\n");
        return 1;
    }

    // Step 5: Read and display content
    printf("File contents:\n");
    while (fgets(buffer, sizeof(buffer), fp) != NULL) 
    {
        printf("%s", buffer);
    }

    // Step 6: Close the file again
    fclose(fp);

    return 0;
}
