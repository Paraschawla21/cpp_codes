#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b && b>c)
        printf("%d is maximum", a);
    else if(b>c)
        printf("%d is maximum", b);
    else if(c>a)
        printf("%d is maximum", c);
    else if(a==b && b==c)
        printf("All are equal");

    return 0;
}