#include <stdio.h>
int main()
{
    int n1;
    printf("Enter number of students: ");
    scanf("%d", &n1);
    char students[n1][20];
    FILE *fp;
    fp = fopen("Students.txt", "w+");
    for (int i = 0; i < n1; i++)
    {
        printf("Enter student name: ");
        fflush(stdin);
        fgets(students[i], 20, stdin);
        fputs(students[i], fp);
    }
    int n;
    printf("Enter the line number you wish to read: ");
    scanf("%d", &n);
    char buff[20];
    int i = 1;
    rewind(fp);
    while (fgets(buff, 20, fp) != NULL)
    {
        if (i == n)
        {
            printf("Name on line %d: %s", n, buff);
            break;
        }
        i++;
    }
}