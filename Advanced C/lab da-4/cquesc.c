#include <stdio.h>
typedef struct student
{
    char name[25];
    int age;
} stu;
int main()
{
    FILE *fp;
    fp = fopen("student.txt", "w+");
    if (!fp)
    {
        printf("Couldn't open file");
    }
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    stu s[n];
    fflush(stdin);
    for (int i = 0; i < n; i++)
    {
        printf("Enter student name: ");
        gets(s[i].name);
        printf("Enter the student age: ");
        scanf("%d", &s[i].age);
        fflush(stdin);
        // Adding details to file:
        fwrite(&s[i], sizeof(struct student), 1, fp);
    }
    if (fwrite != 0)
        printf("Contents to file written successfully !\n");
    else
        printf("Error writing file !\n");

    rewind(fp);
    stu s1;
    stu S[n];
    int i = 0;
    while (fread(&s1, sizeof(stu), 1, fp))
    {
        S[i++] = s1;
    }
    // Sort function
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            stu temp;
            if (s[i].name[0] > s[j].name[0])
            {
                temp = S[i];
                S[i] = S[j];
                S[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("Name: %s ", S[i].name);
        printf("Age: %d\n", S[i].age);
    }
    fclose(fp);
}