#include <stdio.h>
int main()
{
    char string1[20];
    char string2[20]; // Reverse string
    int i = 0, j = 0;
    char *str1;
    char *str2;
    str1 = string1;
    str2 = string2;
    printf("Enter the first string ");
    scanf("%s", string1);

    while (*(str1 + j) != '\0')
    {
        j++;
    }
    string2[j] = '\0';
    j--;
    while (string1[i] != '\0')
    {
        *(str2 + j) = *(str1 + i);
        i++;
        j--;
    }

    printf("The reverse of the string is: %s", string2);
}
