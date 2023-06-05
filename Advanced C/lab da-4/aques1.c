#include <stdio.h>

int main()
{
    FILE *fp;
    int count = 1;
    char ch;
    char filename[1000];
    printf("Enter file name: ");
    scanf("%s", &filename);
    fp = fopen("C:\\Users\\PARAS\\Desktop\\DSA\\Advanced C\\lab da-4/file1.txt", "r");
    if (fp == NULL)
    {
        printf("\nCan not open this file");
        return -1;
    }
    // for (ch = fgetc(fp); ch != EOF; ch = fgetc(fp))
    // {
    //     if (ch == '\n') count++;
    // }
    while (ch != EOF)
    {
        ch = fgetc(fp);
        if (ch == '\n') count++;
    }
    fclose(fp);
    printf("No of lines in %s is %d", filename, count);

    return 0;
}