#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *fp1;
    fp1 = fopen("C:\\Users\\PARAS\\Desktop\\DSA\\Advanced C\\lab da-4\\file2.txt", "r");
    FILE *fp2;
    fp2 = fopen("C:\\Users\\PARAS\\Desktop\\DSA\\Advanced C\\lab da-4\\file3.txt", "w+");
    if (fp1 == NULL)
    {
        printf("Couldn't open file 1");
    }
    if (fp2 == NULL)
    {
        printf("Couldn't open file 2");
    }
    char c;
    while ((c = fgetc(fp1)) != EOF)
    {
        if (c >= 'a' && c <= 'z')
        {
            c = c - 32;
            fputc(c, fp2);
        }
        else
            fputc(c, fp2);
    }
    rewind(fp2);
    char b;
    while ((b = fgetc(fp2)) != EOF)
    {
        putch(b);
    }
}