#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("C:\\Users\\PARAS\\Desktop\\DSA\\Advanced C\\lab da-4\\file2.txt", "r");
    if (!fp)
    {
        printf("Couldn't open file 2");
    }
    int line_number = 0;
    char str[200];
    while (fgets(str, 200, fp) != NULL)
    {
        ++line_number;
        printf("Line no: %d %s", line_number, str);
    }
}