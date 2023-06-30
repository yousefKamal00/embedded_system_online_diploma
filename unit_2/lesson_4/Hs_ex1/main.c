#include <stdio.h>

int main() {
    char a[300],x;
    int i,count=0;
    printf("enter a string :\n");
    gets(a);
    printf("enter a character to find frequency :\n");
    fflush(stdin);
    scanf("%c",&x);
    for (i = 0; a[i] != '\0' ; ++i) {
        if(x==a[i]) count++;
    }
    printf("the character frequency : %d\n",count);
    return 0;
}
