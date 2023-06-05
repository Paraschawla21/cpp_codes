#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    char filename[1000];
    printf("Enter file name: ");
    scanf("%s", filename);
    fp = fopen("C:\\Users\\PARAS\\Desktop\\DSA\\Advanced C\\lab da-4/file2.txt", "r");
    if (fp == NULL)
    {
        printf("\nCan't open this file");
        return 1;
    }
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(fp);
    }
    fclose(fp);

    return 0;
}