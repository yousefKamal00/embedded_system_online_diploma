#include <stdio.h>

struct emp{
    char* name;
    int id;
};

int main() {
    struct emp emp1 ={"john",1001},emp2={"alex",1002},emp3={"taylor",1003};
    struct emp (*arr[3])={&emp1,&emp2,&emp3};
    struct emp (*(*ptr)[3])=arr;
    printf("employee name : %s\n",(*(*ptr+1))->name);
    printf("employee id : %d\n",(*(*ptr+1))->id);
    return 0;
}
