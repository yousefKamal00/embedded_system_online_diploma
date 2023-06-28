#include <stdio.h>

int main() {
    char c;
    printf("enter a character :\n");
    fflush(stdout);
    scanf("%c",&c);
    if((c>=65&&c<=90)||(c>=97&&c<=122)) printf("%c is an alphabet",c);
    else printf("%c isn't an alphabet",c);
    return 0;
}
