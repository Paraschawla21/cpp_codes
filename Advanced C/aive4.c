#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// int main()
// {
//     char *c[] = {"gate", "smashers", "varun", "trending"};
//     printf("%s", *c+1);
//     printf("\n%s", *(c+1));
//     printf("\n%s", *(c+2));
//     printf("\n%s", *(c+3)+2);
// }

// int *fun(void)
// {
//     int b = 700;
//     return &b;
// }
// int main()
// {
//     int a = 600;
//     int *ptr = NULL;
//     printf("\n%p", &a);
//     ptr = fun();
//     printf("\n%d", *ptr);

//     return 0;
// }

// int main()
// {
//     int a = 500;
//     int *ptr = NULL;
//     printf("\n%d", a);
//     printf("\n%d", ptr);
//     printf("\n%d", *ptr);    // nothing will get print
// }

// recursion

// void t(int n)
// {
//     if(n>0)
//     {
//         t(n-1);
//         printf("\n%d", n);
//     }
// }

// void main()
// {
//     t(3);
// }

// int main()

// {
//     printf("%d", strcmp("Paras", "chawLa"));

// }

// // remainder without modulo

// int main()
// {
//     int a = 5, b = 2;
//     int q = a / b;
//     printf("%d", q);
//     int r = a - q*b;
//     printf("\n%d", r);
//     printf("\n%d", a%b);
// }

// // gcd or hcf

// int hcf(int n1, int n2)
// {
//     int rem = n1 - (n1/n2 * n2);
//     if (rem == 0)
//     {
//         return n2;
//     }
//     else
//         return hcf(n2, rem);
// }

// int main()
// {
//     int a = 702, b = 90;
//     int gcd = hcf(a,b);
//     printf("%d", gcd);

//     return 0;
// }

// random

// int main()
// {

//     int n, max, num, c;

//     printf("Enter Number of Random Numbers You Want:");
//     scanf("%d", &n);

//     printf("Enter Maximum value for the Random Numbers:");
//     scanf("%d", &max);

//     printf("%d random numbers from 0 to %d\n\n",n,max);

// for(c = 1; c <= n; c++)
// {

//     num = rand() % max + 1;
//     printf("%d\n",num);

// }

// system("PAUSE");
// return 0;

// }

// reverse a string

// int main()
// {
//     char str[100];
//     char palin[100] = {'\0'};
//     int i;
//     printf("Enter the string : ");
//     gets(str);
//     for (i = 0; str[i]!='\0'; i++)
//     {
//         palin[i] += str[i];
//     }
//     printf("\n%s", palin);
//     int len = strlen(str);
//     for (i = 0 ; i < strlen(str)/2; i++)
//     {
//         char temp = str[i];
//         str[i] = str[len-i-1];
//         str[len-i-1] = temp;
//     }
//     printf("\n%s", str);
//     int flag = 0;
//     for (i = 0; i < strlen(palin); i++)
//     {
//         if (str[i] != palin[i])
//         {
//             flag = 0;
//             break;
//         }
//         else
//             flag++;
//     }
//     if (flag == 0)
//     {
//         printf("\nNO");
//     }
//     else
//     {
//         printf("\nYES");
//     }

//     return 0;
// }

// date and time

// int main()
// {
//     printf("Current Date: %s\n\n", __DATE__);
//     printf("Current Time: %s\n\n", __TIME__);
//     system("PAUSE");
//     return 0;
// }


