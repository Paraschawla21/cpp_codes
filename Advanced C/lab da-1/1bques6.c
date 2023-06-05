#include <stdio.h>
int main()
{
    float speed = 60;
    float distance = 350;
    float time = distance / speed;
    printf("The time required to cover a distance of 350 km with a speed of 60km/h is %.3f hours", time);

    return 0;
}