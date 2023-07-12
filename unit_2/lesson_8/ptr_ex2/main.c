#include <stdio.h>

int main() {
    char* ptr,a[27];
    int i;
    ptr = a;
    for ( i = 0; i < 26; ++i) {
        *ptr='A'+i;
        ptr++;
    }
    ptr = a;
    printf("the alphabets are :\n");
    for (i = 0; i < 26; ++i) {
        printf("%c\t",*ptr);
        ptr++;
    }
    return 0;
}
