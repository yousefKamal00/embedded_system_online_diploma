#include <stdio.h>

int main() {
    int a[10][10],b[10][10],r,c,i,j;
    printf("enter the number of rows and columns :\n");
    fflush(stdin);
    scanf("%d %d",&r,&c);
    printf("enter the matrix elements :\n");
    for ( i = 0; i < r ; ++i) {
        for ( j = 0; j < c ; ++j) {
            printf("enter element a%d%d : \n",i+1,j+1);
            fflush(stdin);
            scanf("%d",&a[i][j]);
        }
    }
    for ( i = 0; i < r ; ++i) {
        for ( j = 0; j < c ; ++j) {
            b[j][i]=a[i][j];
        }
    }
    printf("the entered matrix :\n");
    for ( i = 0; i < r ; ++i) {
        for ( j = 0; j < c ; ++j) {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("the transpose of the matrix :\n");
    for ( i = 0; i < c ; ++i) {
        for ( j = 0; j < r ; ++j) {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
