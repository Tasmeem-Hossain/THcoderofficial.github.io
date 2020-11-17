#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Student{
    int id;
    char name[20];
    char dept[5];
};


int main()
{
    struct Student st;
    st.id = 1;
    strcopy(st.name,"Rakib");
    strcopy(st.dept,"CSE");

    printf("ID: %d, NAME: %s, DEPARTMENT: %s", st.id, st.name, st.dept);

    return 0;
}
