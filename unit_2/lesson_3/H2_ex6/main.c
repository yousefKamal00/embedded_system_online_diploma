#include <stdio.h>

int main() {
    int x,sum=0,i;
    printf("enter the number you want its sum :\n");
    fflush(stdout);
    scanf("%d",&x);
    for (i = 0; i <= x; ++i) {
        sum+=i;
    }
    printf("the sum is :  %d",sum);
    return 0;
}
