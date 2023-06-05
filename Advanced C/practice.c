#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>

struct Books {
    char title[50];
    char author[50];
    int book_id;
};

int main()
{
    // fibonacci series

    int n, previous = 0, next = 1, next2next;
    scanf("%d", &n);
    printf("0  1  ");
    for (int i = 2; i < n; i++)
    {
        next2next = previous + next;
        previous = next;
        next = next2next;
        printf("%d  ", next2next);
    }

    //reverse the given number

    // int n, remainder, rev = 0;
    // scanf("%d", &n);
    // while (n != 0)
    // {
    //     remainder = n % 10;
    //     rev = rev * 10 + remainder;
    //     n /= 10;
    // }
    // printf("%d", rev);

    // reverse the string

    // char name[100] = "Paras";
    // strrev(name);
    // printf("%s", name);

    // palindrome number or not

    // int n, remainder, rev = 0, temp;
    // scanf("%d", &n);
    // temp = n;
    // while (n != 0)
    // {
    //     remainder = n % 10;
    //     rev = rev * 10 + remainder;
    //     n /= 10;
    // }
    // if (temp == rev)
    // {
    //     printf("Palindrome");
    // }
    // else
    //     printf("Not Palindrome");
    
    struct Books b1;
    
    printf("Enter book author: ");
    scanf("%s", &b1.author);

    // b1.title = "LET US C";      // wronggggg

    strcpy(b1.title, "LET US C");
    b1.book_id = 150;

    printf("\nBook Name: %s", b1.title);
    printf("\nBook ID: %d", b1.book_id);
    printf("\nBook Author: %s", b1.author);

    return 0;
}