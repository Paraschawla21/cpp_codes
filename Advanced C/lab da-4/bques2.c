#include <stdio.h>

int main()
{

    FILE *fp1, *fp2;
    char filename1[1000], filename2[1000];
    char ch;
    printf("\nEnter the name of the first file: ");
    scanf("%s", filename1);

    fp1 = fopen("C:\\Users\\PARAS\\Desktop\\DSA\\Advanced C\\lab da-4\\file9.txt", "r");

    if (fp1 == NULL)
    {
        printf("\nCan not open this file..!!");
        return 1;
    }

    printf("\nEnter the name of the second File in which you want to append the contents of first file: ");
    scanf("%s", filename2);
    
    fp2 = fopen("C:\\Users\\PARAS\\Desktop\\DSA\\Advanced C\\lab da-4\\file10.txt", "a");

    if (fp2 == NULL)
    {
        printf("\nCan not open this file..!!");
        return 1;
    }

    ch = getc(fp1);
    while (ch != EOF)
    {
        fputc(ch, fp2);
        ch = getc(fp1);
    }
    
    printf("\nContents of first file have been appended to second file...!!");
    fclose(fp1);
    fclose(fp2);

    return 0;
}