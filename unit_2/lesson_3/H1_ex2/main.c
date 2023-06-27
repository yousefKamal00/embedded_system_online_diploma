#include <stdio.h>

void main() {
    int x;
    printf("enter a number : ");
    fflush(stdout);
    scanf("%d",&x);
    if(!(x%2))printf("the number is even");
    else printf("the number is odd");
}
