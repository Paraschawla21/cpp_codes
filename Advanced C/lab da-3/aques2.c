#include <stdio.h>

union U
{
    int a;
    float b;
    char c;
};

int main()
{
    union U u1[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of a: ");
        scanf("%d", &u1[i].a);
        printf("The value of a is %d\n", u1[i].a);
        printf("Enter the value of b: ");
        scanf("%f", &u1[i].b);
        printf("The value of b is %f \n", u1[i].b);
        printf("Enter the value of c: ");
        scanf("%s", &u1[i].c);
        printf("The value of c is %c \n", u1[i].c);
    }
}