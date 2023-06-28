#include <stdio.h>

int main() {
    char a;
    float x,y;
    printf("please enter two numbers and the mathematical operator :\n");
    fflush(stdout);
    scanf("%f %f %c",&x,&y,&a);
    switch (a) {
        case '+':
            printf("the result is : %f",x+y);break;
        case '-':
            printf("the result is : %f",x-y);break;
        case '*':
            printf("the result is : %f",x*y);break;
        case '/':
            printf("the result is : %f",x/y);break;
        default:
            printf("unknown option");
    }
    return 0;
}
