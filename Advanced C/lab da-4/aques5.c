#include <stdio.h>

int main()
{
    FILE *fp;
    char filename[1000];
    printf("\nEnter the name of the file you want to delete: ");
    scanf("%s", filename);

    if (remove("C:\\Users\\PARAS\\Desktop\\DSA\\Advanced C\\lab da-4/file5.txt") == 0)
        printf("File deleted successfully...!!");
    else
        printf("Enable to delete this file...!!");

    return 0;
}