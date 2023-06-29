#include <stdio.h>

int main() {
    int a[100],n,loc,i;
    printf("enter the number of elements : \n");
    fflush(stdin);
    scanf("%d",&n);
    printf("enter the elements of the array :\n");
    for ( i = 0; i < n ; ++i) {
        fflush(stdin);
        scanf("%d",&a[i]);
    }
    printf("the elements of the array is :\n");
    for ( i = 0; i < n ; ++i) {
        printf("%d  ",a[i]);
    }
    printf("\nenter the location of the element you wanna insert :\n");
    fflush(stdin);
    scanf("%d",&loc);
    printf("enter the element you wanna insert :\n");
    fflush(stdin);
    scanf("%d",&a[loc-1]);
    printf("the elements of the array is :\n");
    for ( i = 0; i < n ; ++i) {
        printf("%d  ",a[i]);
    }
    return 0;
}
