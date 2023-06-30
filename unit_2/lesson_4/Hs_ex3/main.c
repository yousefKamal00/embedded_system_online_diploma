#include <stdio.h>
#include <string.h>

int main() {
    char a[300];
    int i;
    printf("enter a string :\n");
    gets(a);
    printf("the reversed string is :\n");
    for ( i = (strlen(a)-1); i >=0 ; i--) {
        printf("%c",a[i]);
    }
    return 0;
}
