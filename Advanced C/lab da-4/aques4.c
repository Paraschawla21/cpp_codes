#include <stdio.h>

int main()
{
    FILE *fp1, *fp2, *fp3;
    char c1, c2;
    char filename1[10000], filename2[10000], filename3[10000];
    printf("\nEnter the name of the first file: ");
    scanf("%s", filename1);
    
    fp1 = fopen("C:\\Users\\PARAS\\Desktop\\DSA\\Advanced C\\lab da-4/file2.txt", "r");

    printf("\nEnter the name of the second file: ");
    scanf("%s", filename2);

    fp2 = fopen("C:\\Users\\PARAS\\Desktop\\DSA\\Advanced C\\lab da-4/file3.txt", "r");

    printf("\nEnter the name of the third file in which you want to merge the items of first file and second file: ");
    scanf("%s", filename3);

    fp3 = fopen("C:\\Users\\PARAS\\Desktop\\DSA\\Advanced C\\lab da-4/file4.txt", "w");
    
    if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
    {
        printf("\nCan not open this file");
        return 1;
    }

    c1 = fgetc(fp1);
    
    while (c1 != EOF)
    {
        fputc(c1, fp3);
        c1 = fgetc(fp1);
    }

    c2 = fgetc(fp2);
    while (c2 != EOF)
    {
        fputc(c2, fp3);
        c2 = fgetc(fp2);
    }

    printf("\nMerged %s and %s into %s", filename1, filename2, filename3);

    fclose(fp1);
    fclose(fp2);
    fclose(fp3);

    return 0;
}