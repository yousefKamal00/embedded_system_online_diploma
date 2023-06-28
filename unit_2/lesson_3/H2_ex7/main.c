#include <stdio.h>

int main() {
    int x, fac = 1, i;
    printf("enter the number you want its factorial :\n");
    fflush(stdout);
    scanf("%d", &x);
    if (x >= 0) {
        for (i = 1; i <= x; ++i) {
            fac *= i;
        }
        printf("the factorial is :  %d", fac);
    } else printf("error negative number");
    return 0;
}