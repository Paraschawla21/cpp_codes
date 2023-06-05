#include <stdio.h>
int main()
{
    char a;
    printf("Enter input: ");
    scanf("%c", &a);
    if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
    {
        printf("It's an alphabet.");
    }
    else
    {
        printf("It's not an alphabet.");
    }
    return 0;
}