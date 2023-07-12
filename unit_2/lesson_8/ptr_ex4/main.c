#include <stdio.h>

int main() {
    int *ptr,i,n,a[15];
    printf("Input the number of elements to store in the array (max 15) :\n");
    fflush(stdin);
    scanf("%d",&n);

    printf("Input %d number of elements in the array :\n",n);
    for (i = 0; i < n; ++i) {
        fflush(stdin);
        fflush(stdout);
        printf("element - %d : ",i+1);
        scanf("%d",&a[i]);
    }
    ptr = &a[n-1];
    printf("The elements of array in reverse order are :\n");
    for ( i = n; i > 0; --i) {
        printf("element - %d : %d\n",i,*ptr);
        ptr--;
    }
    return 0;
}
