#include <windows.h>

int dialogueBox(void);

int main(void)
{
    int result = dialogueBox();

    // result will be IDOK for MB_OK dialogs
    return 0;
}

int dialogueBox(void)
{
    return MessageBox(NULL, "hello, world", "caption", MB_OK);
}