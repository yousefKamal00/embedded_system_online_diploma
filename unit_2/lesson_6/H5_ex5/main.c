#include <stdio.h>
#define PI 3.14
#define area(r) (r*r*PI)

int main() {
    float radius;
    printf("enter the circle's radius :\n");
    fflush(stdin);
    scanf("%f",&radius);
    printf("the area is : %f", area(radius));
    return 0;
}
