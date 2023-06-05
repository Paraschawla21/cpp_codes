#include <stdio.h>
int main()
{
    char a;
    printf("Enter Alphabet: ");
    scanf("%c", &a);
    if (a >= 'a' && a <= 'z')
    {
        printf("Lowercase.");
    }
    else
    {
        printf("Uppercase.");
    }
    return 0;
}