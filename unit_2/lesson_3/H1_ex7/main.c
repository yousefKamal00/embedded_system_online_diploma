#include <stdio.h>

void main() {
    int x,y;
    printf("enter two numbers : \n");
    fflush(stdout);
    scanf("%d %d",&x,&y);
    x*=y;
    y=x/y;
    x/=y;
    printf("x value : %d\ny value : %d",x,y);
}
