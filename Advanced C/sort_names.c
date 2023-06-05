#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student {
    char* name[25];
    int age;
};

int comparator(const void* p, const void* q)
{
    return strcmp(((struct student*)p)->name, ((struct student*)q)->name);
}

int main()
{
    int n;
    printf("\nEnter n: ");
    scanf("%d", &n);

    struct student s[n];

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter name: ");
        scanf("%s", s[i].name);
        fflush(stdin);
        printf("\nEnter Age: ");
        scanf("%d", &s[i].age);
    }
    
    printf("\nName\tAge");

    for (int i = 0; i < n; i++)
    {
        printf("\n%s\t%d", s[i].name, s[i].age);
    }
    
    qsort(s, n, sizeof(struct student), comparator);
    
    printf("\nAfter sorting:");
    printf("\n\nName\tAge");
    for (int i = 0; i < n; i++)
    {
        printf("\n%s\t%d", s[i].name, s[i].age);
    }
}