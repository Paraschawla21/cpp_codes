#include <stdio.h>

union myUnion
{
    int a;
    char b;
    float c;
};

struct myStruct
{
    int a;
    char b;
    float c;
};

int main(int argc, char const *argv[])
{
    struct myStruct s1;
    s1.a = 7;
    s1.b = 'K';
    s1.c = 12.458;
    union myUnion u1;
    u1.a = 44;
    u1.b = 'T';
    u1.c = 42.25;

    printf("For structure: \n");
    printf("a = %d\n", s1.a);
    printf("b = %c\n", s1.b);
    printf("c = %f\n", s1.c);

    printf("For union: \n");
    printf("a = %d\n", u1.a);
    printf("b = %c\n", u1.b);
    printf("c = %f\n", u1.c);

    return 0;
}
