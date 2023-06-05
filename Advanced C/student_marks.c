#include <stdio.h>
int main()
{
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);
    if (marks >= 91)
    {
        printf("Grade: S\n");
    }
    else if (marks >= 81)
    {
        printf("Grade: B\n");
    }
    else if (marks >= 71)
    {
        printf("Grade: C\n");
    }
    else if (marks >= 61)
    {
        printf("Grade: D\n");
    }
    else if (marks >= 51)
    {
        printf("Grade: E\n");
    }
    else if (marks < 50)
    {
        printf("Failed exam\n");
    }
    return 0;
}