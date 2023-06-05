#include <stdio.h>
int main()
{
    char string1[20];
    char string2[20];
    int i = 0, flag = 0;
    char *str1;
    char *str2;
    str1 = string1;
    str2 = string2;
    printf("Enter the first string ");
    scanf("%s", string1);
    printf("\nEnter the second string ");
    scanf("%s", string2);
    while (string1[i] != '\0')
    {
        if (*(str1 + i) == *(str2 + i))
        {
            flag = 0;
        }
        else
        {
            flag = 1;
            break;
        }
        i++;
    }

    if (flag == 0)
    {
        printf("The strings are the same.");
    }
    else
    {
        printf("The strings are different.");
    }
}
