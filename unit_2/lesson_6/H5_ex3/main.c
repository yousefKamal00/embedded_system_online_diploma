#include <stdio.h>

struct Snum{
    float real;
    float comp;
};
struct Snum add(struct Snum* x,struct Snum* y){
    struct Snum sum;
    sum.real=x->real+y->real;
    sum.comp=x->comp+y->comp;
    return sum;
}
int main() {
    struct Snum n1,n2,n3;
    printf("enter 1st number :\nreal :\n");
    fflush(stdin);
    scanf("%f",&n1.real);
    printf("complex :\n");
    fflush(stdin);
    scanf("%f",&n1.comp);
    printf("enter 2nd number :\nreal :\n");
    fflush(stdin);
    scanf("%f",&n2.real);
    printf("complex :\n");
    fflush(stdin);
    scanf("%f",&n2.comp);
    n3 = add(&n1,&n2);
    printf("the sum of numbers : %f+%fi",n3.real,n3.comp);
    return 0;
}
