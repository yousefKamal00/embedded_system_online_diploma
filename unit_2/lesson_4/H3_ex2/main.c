#include <stdio.h>

int main() {
    float data[100],sum=0;
    int n,i;
    printf("enter the number of data : \n");
    fflush(stdin);
    scanf("%d",&n);
    for (i = 0; i < n; i++) {
        printf("enter number  : ");
        fflush(stdin);
        scanf("%f",&data[i]);
        sum+=data[i];
    }
    printf("the average is : %f",sum/n);

    return 0;
}
