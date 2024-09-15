#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    int code = ch;
    if (code >= 'A' && code <= 'Z')
    {
        printf("Uppercase");
    }
    else if (code >= 'a' && code <= 'z')
    {
        printf("lowercase");
    }
    else if (code >= '0' && code <= '9')
    {
        printf("digit");
    }
    else
    {
        printf("special symbol");
    }

    return 0;
}