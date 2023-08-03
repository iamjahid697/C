#include <stdio.h>
// area of square in integer
int main()
{
    int side;
    printf("Enter side ");
    scanf("%d", &side);
    printf("Side is %d\n", side * side);
    return 0;
}

// area of square in float
int main()
{
    float side;
    printf("Enter side");
    scanf("%f", &side);
    printf("area is : %f\n", side * side);
    return 0;
}