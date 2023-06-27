#include <stdio.h>

void main() {
    char c;
    printf("enter a character : \n");
    fflush(stdout);
    scanf("%c",&c);
    printf("ASCII value of %c = %d",c,c);
}
