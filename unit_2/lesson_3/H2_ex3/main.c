#include <stdio.h>

void main() {
    float a,b,c,max;
    printf("enter 3 numbers :\n");
    fflush(stdout);
    scanf("%f %f %f",&a,&b,&c);
    max = (a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("max value = %f",max);

}
