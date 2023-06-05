#include<stdio.h>
int main()
{
    int array[] = {1,2,3,4,5};
    int i, *arrayptr;
    arrayptr = &array[0];    // if [0] not placed then it will by default take 0th index.
    for(i = 0; i < sizeof(array)/sizeof(int); i++)
    {
        printf("\nAddress = %d", arrayptr);
        printf("\nValue = %d", *arrayptr);
        arrayptr++;
    }
    return 0;
}