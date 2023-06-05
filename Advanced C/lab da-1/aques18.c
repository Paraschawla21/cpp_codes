#include <stdio.h>
int main()
{
    int Physics, Chemistry, Biology, Mathematics, Computer;
    float average;
    printf("Enter mark of Physics subject: ");
    scanf("%d", &Physics);
    printf("Enter mark of Chemistry subject: ");
    scanf("%d", &Chemistry);
    printf("Enter mark of Biology subject: ");
    scanf("%d", &Biology);
    printf("Enter mark of Mathematics subject: ");
    scanf("%d", &Mathematics);
    printf("Enter mark of Computer subject: ");
    scanf("%d", &Computer);
    average = ((Physics + Chemistry + Biology + Mathematics + Computer) / 5.0);
    printf("\nPercentage: %.2f\n", average);
    if (average > 100)
    {
        printf("Invalid marks assigned");
    }
    else if (average >= 90 && average <= 100)
    {
        printf("Grade: S\n");
    }
    else if (average >= 80 && average < 90)
    {
        printf("Grade: A\n");
    }
    else if (average >= 70 && average < 80)
    {
        printf("Grade: B\n");
    }
    else if (average >= 60 && average < 70)
    {
        printf("Grade: C\n");
    }
    else if (average >= 50 && average < 60)
    {
        printf("Grade: D\n");
    }
    else
    {
        printf("Grade: F\n");
    }
    return 0;
}