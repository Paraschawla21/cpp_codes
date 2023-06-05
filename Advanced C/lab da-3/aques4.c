#include <stdio.h>
#include <string.h>
#include <malloc.h>

struct employee
{
    char *name;
    int *age;
    float salary;
};

int main()
{
    struct employee emp[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the name: ");
        emp[i].name = (char *)malloc(sizeof(char) * 10);
        scanf("%s", emp[i].name);
        printf("Enter the age: ");
        emp[i].age = (int *)malloc(sizeof(int));
        scanf("%d", emp[i].age);
        printf("Enter the salary: ");
        scanf("%f", &emp[i].salary);
    }

    for (int i = 0; i < 10; i++)
    {
        while (*emp[i].name != '\0')
        {
            printf("%s", *emp[i].name++);
        }
        printf("%s", *emp[i].name);
        printf("\nAge: %d\n", *emp[i].age);
        printf("Salary: %.3f\n\n", emp[i].salary);
    }
}