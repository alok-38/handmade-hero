#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declare a file pointer
    FILE *file_pointer;
    // 2. Open file in read mode ("r")
    file_pointer = fopen("Hello.txt", "r");

    // Verify if the file opened successfully
    if (file_pointer == NULL)
    {
        printf("Error: Could not open the file.\n");
        // Exit with an error code
        return 1;
    }

    // Read and print character-by-character
    int character; // to check against EOF
    while ((character = fgetc(file_pointer)) != EOF)
    {
        putchar(character);
    }
    fclose(file_pointer);
    return 0;
}