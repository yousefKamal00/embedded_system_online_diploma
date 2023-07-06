#include <stdio.h>

struct Sdata {
    char m_name[50];
    int m_roll;
    float m_marks;
};
int main() {
    struct Sdata student[10];
    int i,n;
    printf("enter number of students :\n");
    fflush(stdin);
    scanf("%d",&n);
    printf("enter students information :\n");
    for (i = 0; i < n; ++i) {
        student[i].m_roll=i+1;
        printf("for roll number %d:\n",student[i].m_roll);
        printf("enter name:");
        fflush(stdin);
        gets(student[i].m_name);
        printf("enter marks :");
        fflush(stdin);
        scanf("%f",&student[i].m_marks);
    }
    printf("display students information :\n");
    for  (i = 0; i < n; ++i) {
        printf("for roll number %d :\n",student[i].m_roll);
        printf("name : %s\nmarks : %f\n",student[i].m_name,student[i].m_marks);
    }
    return 0;
}
