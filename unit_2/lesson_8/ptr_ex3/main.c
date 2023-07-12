#include <stdio.h>
#include <string.h>

int main() {
    char *ptr,str[50];
    printf("enter a string\n");
    gets(str);
    ptr = str + strlen(str);
    printf("the reversed string :\n");
    while(ptr>=str){
        printf("%c",*ptr);
        ptr--;
    }
    return 0;
}
