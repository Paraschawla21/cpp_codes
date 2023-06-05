#include <stdio.h>
#include <string.h>
struct train
{
    char name[20];
    int h;
    int m;
    char ap[2];
} t[5];

int main()
{
    printf("\nEnter train names and their arrival times:\n");
    for (int i = 0; i < 5; i++)
        scanf("%s%d%d%s", t[i].name, &t[i].h, &t[i].m, t[i].ap);

    printf("\nTrain Name  Arrival\n");
    for (int i = 0; i < 5; i++)
    {
        if (t[i].h < 12 && t[i].m <= 59 && (strcmp(t[i].ap, "PM") == 0 || strcmp(t[i].ap, "pm") == 0))
        {
            t[i].h += 12;
            printf("\n%s---->%d:%d", t[i].name, t[i].h, t[i].m);
        }
        else
            printf("\n%s---->%d:%d", t[i].name, t[i].h, t[i].m);
    }
}