// Write a program to calculate area of a circle

#include <stdio.h>
// area of a circle
int main()
{
    float radius;
    printf("Enter radius ");
    scanf("%f", &radius);
    printf("Area is :%f\n", 3.14 * radius * radius);
    return 0;
}