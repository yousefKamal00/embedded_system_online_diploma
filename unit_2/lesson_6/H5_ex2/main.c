#include <stdio.h>

struct Sdistance{
    int feet;
    float inch;
};
struct Sdistance add(struct Sdistance* x,struct Sdistance* y){
    struct Sdistance sum;
    sum.feet=x->feet+y->feet;
    sum.inch=x->inch+y->inch;
    if(sum.inch>=12){
        sum.inch-=12.0;
        sum.feet++;
    }
    return sum;
}
int main() {
    struct Sdistance d1,d2,d3;
    printf("enter 1st distance :\nfeet :\n");
    fflush(stdin);
    scanf("%d",&d1.feet);
    printf("inches :\n");
    fflush(stdin);
    scanf("%f",&d1.inch);
    printf("enter 2nd distance :\nfeet :\n");
    fflush(stdin);
    scanf("%d",&d2.feet);
    printf("inches :\n");
    fflush(stdin);
    scanf("%f",&d2.inch);
    d3 = add(&d1,&d2);
    printf("the sum of distances : %d\' %f\"",d3.feet,d3.inch);
    return 0;
}
