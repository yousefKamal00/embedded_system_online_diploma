#include <stdio.h>

int main() {
    char a[300];
    int len = 0,i;
    printf("enter a string :\n");
    gets(a);
    for ( i = 0; a[i]!='\0' ; ++i) {
        len++;
    }
    printf("string length :  %d\n",len);
    return 0;
}
