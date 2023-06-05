#include <stdio.h>

int main()
{
    FILE *fp1, *fp2;
    char c;
    char filename[1000];
    printf("Enter name of the first file: ");
    scanf("%s", &filename);

    fp1 = fopen("C:\\Users\\PARAS\\Desktop\\DSA\\Advanced C\\lab da-4/file3.txt", "r");
    if (fp1 == NULL)
    {
        printf("Can not open this file");
        return 1;
    }

    printf("Enter the name of the second file in which you want to copy things from first file: ");
    scanf("%s", &filename);

    fp2 = fopen("C:\\Users\\PARAS\\Desktop\\DSA\\Advanced C\\lab da-4/file4.txt", "w");
    if (fp2 == NULL)
    {
        printf("Can not open this file");
        return 1;
    }

    while (c != EOF)
    {
        c = fgetc(fp1);
        fputc(c, fp2);
    }

    printf("Contents Copied");

    fclose(fp1);
    fclose(fp2);

    return 0;
}