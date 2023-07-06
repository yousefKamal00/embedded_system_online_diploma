#include <stdio.h>

struct Sdata {
    char m_name[50];
    int m_roll;
    float m_marks;
};
int main() {
    struct Sdata student;
    printf("enter student information :\nenter name :\n");
    fflush(stdin);
    gets(student.m_name);
    printf("enter roll number :\n");
    fflush(stdin);
    scanf("%d",&student.m_roll);
    printf("enter marks :\n");
    fflush(stdin);
    scanf("%f",&student.m_marks);
    printf("displaying info :\nname : %s\nroll : %d\nmarks : %f",
           student.m_name,student.m_roll,student.m_marks);
    return 0;
}
