#include <stdio.h>

int main() {
    int* ab;
    int m = 29;
    printf("Address of m : %X\nValue of m : %d\n",&m,m);
    ab=&m;
    printf("Now ab is assigned with the address of m.\nAddress of pointer ab : %X\nContent of pointer ab : %d\n",ab,*ab);
    m = 34;
    printf("The value of m assigned to 34 now.\nAddress of pointer ab : %X\nContent of pointer ab : %d\n",ab,*ab);
    *ab = 7;
    printf("The pointer variable ab is assigned with the\nvalue 7 now.\nAddress of m : %X\nValue of m : %d",&m,m);
    return 0;
}
