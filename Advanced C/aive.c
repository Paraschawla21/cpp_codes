#include<stdio.h>
#include<string.h>

int main()
{
    FILE *fp;
    char ch;
    char filename[1024];
    printf("Enter the name of your file : ");
    scanf("%s", &filename);
    fp = fopen("C:\\Users\\PARAS\\Desktop\\DSA\\Advanced C/paras.txt", "r");
    if (fp == NULL)
    {
        printf("Can not open this file..!!");
        return -1;
    }
    else
    {
        while (ch != EOF)
        {
            printf("%c", ch);
            ch = getc(fp);
        }
    }
    fclose(fp);

    return 0;
}