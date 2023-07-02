#include <stdio.h>

int power (int x,int y);
int main() {
    int a,b;
    printf("enter the base and the power numbers :\n");
    scanf("%d %d",&a,&b);
    printf("%d ^ %d = %d",a,b, power(a,b));
    return 0;
}
int power (int x,int y){
    if(y != 0) return x*power(x,y-1);
    else return 1;
}
