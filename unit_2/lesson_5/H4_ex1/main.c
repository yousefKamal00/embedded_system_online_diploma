#include <stdio.h>

void prime(int x,int y);
int main() {
    int a,b;
    printf("please enter two numbers:\n");
    scanf("%d %d",&a,&b);
    prime(a,b);
    return 0;
}
void prime(int x,int y) {
    int i;
    printf("the prime numbers between these numbers are :\n");
    if (x < y) {
        for (i = x; i < y; ++i){
            if (i % 2 && i % 3 && i % 5) printf("%d  ", i);
        }
    }
    else if(x > y){
        for (i = y; i < x; ++i){
            if (i % 2 && i % 3 && i % 5) printf("%d  ", i);
        }
    }
    else printf("sorry the numbers are identical");
}
