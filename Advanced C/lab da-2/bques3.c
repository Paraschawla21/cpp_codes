#include <stdio.h>

int main()
{
    char s[100];
    printf("Enter a string: ");
    gets(s);
    printf("\nYour string is: %s\n", s);
    char *ptr;
    ptr = s;
    int i = 0;
    while (*(ptr + i) != '\0')
    {
        i++;
    }
    printf("The length of the string is: %d", i);
}