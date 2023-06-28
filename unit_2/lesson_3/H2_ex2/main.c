#include <stdio.h>

void main() {
    char c;
    printf("enter an alphabet :\t");
    fflush(stdout);
    scanf("%c",&c);
    if(c=='a'||c=='A'||c=='i'||c=='I'||c=='e'||c=='E'||c=='o'||c=='O'||c=='u'||c=='U')printf("%c  is vowel ",c);
    else printf("%c  is consonant",c);
}
