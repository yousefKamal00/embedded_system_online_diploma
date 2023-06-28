#include <stdio.h>

int main() {
    float x;
    printf("enter a number :\n");
    fflush(stdout);
    scanf("%f",&x);
    if(x>0) printf("the number is positive");
    else if(x<0) printf("the number is negative");
    else printf("the number is zero");
}
