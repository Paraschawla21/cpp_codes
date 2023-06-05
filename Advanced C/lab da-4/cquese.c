#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *fp1;
    fp1 = fopen("C:\\Users\\PARAS\\Desktop\\DSA\\Advanced C\\lab da-4\\file2.txt", "r");
    FILE *fp2;
    fp2 = fopen("C:\\Users\\PARAS\\Desktop\\DSA\\Advanced C\\lab da-4\\file3.txt", "r");
    FILE *fp3;
    fp3 = fopen("merged.txt", "w+");
    if (fp1 == NULL)
    {
        printf("Couldn't open file 1");
    }
    if (fp2 == NULL)
    {
        printf("Couldn't open file 2");
    }
    if (fp3 == NULL)
    {
        printf("Couldn't open file 3");
    }
    char str[200];
    int count = 0;
    while (fgets(str, 200, fp1) != NULL)
    {
        count++;
    }
    while (fgets(str, 200, fp2) != NULL)
    {
        count++;
    }
    char string[200];
    rewind(fp1);
    rewind(fp2);
    printf("Total no. of lines %d\n", count);
    for (int i = 0; i < count; i++)
    {
        char ss[200];
        if (i % 2 == 0)
        {
            if (fscanf(fp1, "%s", ss) == NULL)
            {
                continue;
            }
            char s1[200];
            fgets(s1, 200, fp1);
            fputs(s1, fp3);
        }
        else
        {
            if (fscanf(fp2, "%s", ss) == NULL)
            {
                continue;
            }
            char s1[200];
            fgets(s1, 200, fp2);
            fputs(s1, fp3);
        }
    }
    // read1(fp1, fp2, fp3);
    char s[200];
    rewind(fp3);
    printf("\nPrinting the contents of file 3: \n");
    while (fgets(s, 200, fp3) != NULL)
    {
        printf("%s", s);
    }
}