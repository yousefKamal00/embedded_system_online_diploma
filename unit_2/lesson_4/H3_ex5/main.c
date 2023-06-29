#include <stdio.h>

int main() {
    int a[100],n,x,i;
    printf("enter the number of elements :\n");
    fflush(stdin);
    scanf("%d",&n);
    printf("enter the elements :\n");
    for ( i = 0; i < n ; ++i) {
        fflush(stdin);
        scanf("%d",&a[i]);
    }
    printf("enter the number you're searching for :\n");
    fflush(stdin);
    scanf("%d",&x);
    for ( i = 0; i < n ; ++i) {
        if(x==a[i]) printf("the number location is : %d\n",i+1);
        else if(i==(n-1)) printf("the number wasn't found\n");
    }
    return 0;
}
