#include <stdio.h>

int factorial(int x);
int main() {
    int n;
    printf("enter a number : \n");
    fflush(stdin);
    scanf("%d",&n);
    printf("the factorial of %d is : %d",n, factorial(n));
    return 0;
}
int factorial(int x){
    if (x!=1)return x*factorial(x-1);
}