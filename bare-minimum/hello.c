#include <windows.h> // Master header for Windows API
#include <stdio.h>

int main()
{
    printf("Displaying a popup box...\n");

    // Creates a native Windows pop-up dialog box
    MessageBox(NULL, "Hello from the Windows API!", "Greeting", MB_OK | MB_ICONINFORMATION);

    printf("Pausing program for 2 seconds...\n");
    Sleep(2000); // Pauses for 2000 milliseconds (Windows-specific)

    return 0;
}
