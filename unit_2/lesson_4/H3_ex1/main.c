#include <stdio.h>

int main() {
    float a[2][2],b[2][2];
    int i,j;
    printf("enter the 1st array elements\n");
    for (i = 0; i < 2 ; ++i) {
        for ( j = 0; j < 2; ++j) {
            printf("element a%d%d : ",i+1,j+1);
            fflush(stdin);
            scanf("%f",&a[i][j]);
        }

    }
    printf("enter the 2nd array elements\n");
    for (i = 0; i < 2 ; ++i) {
        for ( j = 0; j < 2; ++j) {
            printf("element b%d%d : ",i+1,j+1);
            fflush(stdin);
            scanf("%f",&b[i][j]);
        }

    }
    printf("the sum of the matrices is :\n");
    for ( i = 0; i < 2; ++i) {
        for ( j = 0; j < 2; ++j) {
            printf("%f\t",a[i][j]+b[i][j]);
        }
        printf("\n");

    }
    return 0;
}
