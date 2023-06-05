#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp;
    fp = fopen("C:\\Users\\PARAS\\Desktop\\DSA\\Advanced C\\lab da-4\\TRAIL.txt", "r");
    if (fp == NULL)
    {
        printf("Couldn't open file!");
    }
    char text[80];
    int i = 0, j = 0;
    char word[15];
    while (fscanf(fp, "%s", word) != EOF && i++ < 50)
    {
        printf("%s ", word);
        if (strlen(word) == 4)
        {
            j++;
        }
    }
    printf("\n\nNo. of words = %d\n", i);
    printf("\nNo. of 4 letter words = %d", j);
}