#include <stdio.h>
typedef struct donor
{
    char name[20];
    char address[25];
    int age;
    int blood_type;
} donors;
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    donors d[n];
    // Creating donors file
    FILE *fp;
    fp = fopen("donors.txt", "w+");
    if (fp == NULL)
    {
        printf("Couldn't open file");
    }
    // Taking the details of all donors as input:
    for (int i = 0; i < n; i++)
    {
        printf("Enter donor age: ");
        scanf("%d", &d[i].age);
        fflush(stdin);
        printf("Enter donor name: ");
        scanf("\n%s", &d[i].name);
        fflush(stdin);
        printf("Enter donor blood type: ");
        scanf("%d", &d[i].blood_type);
        fflush(stdin);
        printf("Enter donor address: ");
        fgets(d[i].address, 25, stdin);
        fwrite(&d[i], sizeof(struct donor), 1, fp);
    }
    // Reading the file
    rewind(fp);
    for (int i = 0; i < n; i++)
    {
        donors temp;
        fread(&temp, sizeof(struct donor), 1, fp);
        if (temp.age < 25)
        {
            if (temp.blood_type == 2)
            {
                printf("Name: %s\n", temp.name);
                printf("Age: %d\n", temp.age);
                printf("Blood Type: %d\n", temp.blood_type);
                printf("Age: %s\n", temp.address);
            }
        }
    }
    fclose(fp);
}