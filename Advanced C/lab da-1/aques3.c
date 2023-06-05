#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number:\n");
    scanf("%d", &a);
    if(a>0)
        printf("Number is positive");
    else if(a<0)
        printf("Number is negative");
    else if(a==0)
        printf("Number is zero");

    return 0;
}