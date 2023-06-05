#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student {
    char name[25];
    int age;
};

int main()
{
    int n;
    printf("\nEnter n: ");
    scanf("%d", &n);

    struct student s[n];

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter name: ");
        scanf("%s", &s[i].name);
        fflush(stdin);
        printf("\nEnter Age: ");
        scanf("%d", &s[i].age);
    }
    
    printf("\nName\tAge");

    for (int i = 0; i < n; i++)
    {
        printf("\n%s\t%d", s[i].name, s[i].age);
    }
    
    struct student temp;

    for (int i = 0; i < (n-1); i++)
    {
        for (int j = 0; j < (n-1-i); j++)
        {
            if (s[j].age > s[j+1].age)
            {
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
    printf("\nAfter sorting:");
    printf("\n\nName\tAge");
    for (int i = 0; i < n; i++)
    {
        printf("\n%s\t%d", s[i].name, s[i].age);
    }
}